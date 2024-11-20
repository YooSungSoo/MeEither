#include "LoginWindow.h"
#include "ui_LoginWindow.h"
#include "DatabaseManager.h"
#include "ChatRoomList.h"
#include "SignUpWindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

LoginWindow::LoginWindow(QWidget *parent)
    : QWidget(parent), ui(new Ui::LoginWindow), chatRoomList(nullptr) {
    ui->setupUi(this);

    connect(ui->loginButton, &QPushButton::clicked, this, &LoginWindow::onLoginButtonClicked);
    connect(ui->signUpButton, &QPushButton::clicked, this, &LoginWindow::onSignUpButtonClicked);
}

LoginWindow::~LoginWindow() {
    delete ui;
}

void LoginWindow::onLoginButtonClicked() {
    QSqlDatabase db = DatabaseManager::getDatabase(); // Singleton으로 데이터베이스 가져오기

    QString username = ui->usernameLineEdit->text().trimmed();
    QString password = ui->passwordLineEdit->text().trimmed();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "경고", "아이디와 비밀번호를 입력하세요.");
        return;
    }

    QSqlQuery query(db); // DatabaseManager에서 가져온 db 사용
    query.prepare("SELECT COUNT(*) FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (!query.exec()) {
        qDebug() << "로그인 쿼리 실패:" << query.lastError().text();
        QMessageBox::critical(this, "오류", "로그인에 실패했습니다.");
        return;
    }

    if (query.next() && query.value(0).toInt() > 0) {
        qDebug() << "로그인 성공!";
        chatRoomList = new ChatRoomList(username); // ChatRoomList 창 생성 및 사용자 정보 전달
        chatRoomList->show();
        this->close(); // 로그인 창 닫기
    } else {
        QMessageBox::warning(this, "로그인 실패", "아이디 또는 비밀번호가 일치하지 않습니다.");
    }
}

void LoginWindow::onSignUpButtonClicked() {
    SignUpWindow *signUpWindow = new SignUpWindow();
    signUpWindow->show();
}
