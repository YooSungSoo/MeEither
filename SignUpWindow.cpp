#include "SignUpWindow.h"
#include "ui_SignUpWindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

SignUpWindow::SignUpWindow(QWidget *parent)
    : QWidget(parent), ui(new Ui::SignUpWindow) {
    ui->setupUi(this);

    // 버튼 클릭 신호 연결
    connect(ui->signUpButton, &QPushButton::clicked, this, &SignUpWindow::onSignUpButtonClicked);
    connect(ui->conform, &QPushButton::clicked, this, &SignUpWindow::onCheckUsernameClicked);
}

SignUpWindow::~SignUpWindow() {
    delete ui;
}

void SignUpWindow::onSignUpButtonClicked() {
    QString username = ui->usernameLineEdit->text().trimmed();
    QString password = ui->passwordLineEdit->text().trimmed();
    QString nickname = ui->nickName->text().trimmed(); // 올바른 참조
    QString birthDate = ui->birthDateEdit->date().toString("yyyy-MM-dd");
    QString gender = ui->checkBoxM->isChecked() ? "Male" : "Female";

    if (username.isEmpty() || password.isEmpty() || nickname.isEmpty() || gender.isEmpty()) {
        QMessageBox::warning(this, "경고", "모든 필드를 입력하세요.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password, nickname, birth_date, gender) "
                  "VALUES (:username, :password, :nickname, :birth_date, :gender)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":nickname", nickname);
    query.bindValue(":birth_date", birthDate);
    query.bindValue(":gender", gender);

    if (query.exec()) {
        QMessageBox::information(this, "회원가입", "회원가입이 성공적으로 완료되었습니다.");
        this->close();
    } else {
        QMessageBox::critical(this, "오류", "회원가입에 실패했습니다: " + query.lastError().text());
    }
}

void SignUpWindow::onCheckUsernameClicked() {
    QString username = ui->usernameLineEdit->text().trimmed();

    if (username.isEmpty()) {
        QMessageBox::warning(this, "경고", "아이디를 입력하세요.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM users WHERE username = :username");
    query.bindValue(":username", username);

    if (query.exec() && query.next() && query.value(0).toInt() > 0) {
        QMessageBox::warning(this, "경고", "이미 사용 중인 아이디입니다.");
    } else {
        QMessageBox::information(this, "확인", "사용 가능한 아이디입니다.");
    }
}
