#include "SignUpWindow.h"
#include "ui_SignUpWindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

SignUpWindow::SignUpWindow(QWidget *parent)
    : QWidget(parent), ui(new Ui::SignUpWindow) {
    ui->setupUi(this);

    // 회원가입 버튼 연결
    connect(ui->signUpButton, &QPushButton::clicked, this, &SignUpWindow::onSignUpButtonClicked);
    // 중복 확인 버튼 연결
    connect(ui->conform, &QPushButton::clicked, this, &SignUpWindow::onCheckUsernameClicked);
}

SignUpWindow::~SignUpWindow() {
    delete ui;
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

    if (!query.exec()) {
        QMessageBox::critical(this, "오류", "중복 확인 실패: " + query.lastError().text());
        return;
    }

    if (query.next() && query.value(0).toInt() > 0) {
        QMessageBox::warning(this, "경고", "이미 사용 중인 아이디입니다.");
    } else {
        QMessageBox::information(this, "확인", "사용 가능한 아이디입니다.");
    }
}

void SignUpWindow::onSignUpButtonClicked() {
    QString username = ui->usernameLineEdit->text().trimmed();
    QString password = ui->passwordLineEdit->text().trimmed();
    QString nickname = ui->nickName->text().trimmed();
    QString birthDate = ui->birthDateEdit->date().toString("yyyy-MM-dd");
    QString gender = ui->checkBoxM->isChecked() ? "Male" : "Female";

    QString preferredDestinations;
    if (ui->northEU->isChecked()) preferredDestinations += "북유럽,";
    if (ui->westEU->isChecked()) preferredDestinations += "서유럽,";
    if (ui->eastEU->isChecked()) preferredDestinations += "동유럽,";
    if (ui->centralAsia->isChecked()) preferredDestinations += "중앙 아시아,";
    if (ui->eastsouthAsia->isChecked()) preferredDestinations += "동남 아시아,";
    if (ui->northAmerica->isChecked()) preferredDestinations += "북아메리카,";
    if (ui->southAmerica->isChecked()) preferredDestinations += "남아메리카,";
    if (ui->africa->isChecked()) preferredDestinations += "아프리카,";
    if (ui->oseania->isChecked()) preferredDestinations += "오세아니아,";
    if (ui->arctic->isChecked()) preferredDestinations += "남극,";
    if (ui->antArctic->isChecked()) preferredDestinations += "북극,";
    if (ui->eastAsia->isChecked()) preferredDestinations += "동아시아,";

    QString travelStyle;
    if (ui->rest->isChecked()) travelStyle += "휴양,";
    if (ui->cityRest->isChecked()) travelStyle += "도심 휴식,";
    if (ui->shopping->isChecked()) travelStyle += "쇼핑,";
    if (ui->foodSearch->isChecked()) travelStyle += "맛집 탐방,";
    if (ui->activity->isChecked()) travelStyle += "액티비티,";
    if (ui->cultureLife->isChecked()) travelStyle += "문화생활,";
    if (ui->leisurely->isChecked()) travelStyle += "여유롭게,";
    if (ui->busy->isChecked()) travelStyle += "바쁘게,";
    if (ui->trifity->isChecked()) travelStyle += "알뜰하게,";
    if (ui->luxury->isChecked()) travelStyle += "사치스럽게,";
    if (ui->sports->isChecked()) travelStyle += "스포츠,";
    if (ui->nature->isChecked()) travelStyle += "자연,";

    QString mbti = ui->comboBox->currentText();

    if (username.isEmpty() || password.isEmpty() || nickname.isEmpty() || gender.isEmpty()) {
        QMessageBox::warning(this, "경고", "모든 필드를 입력하세요.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password, nickname, birth_date, gender, preferred_destinations, travel_style, mbti) "
                  "VALUES (:username, :password, :nickname, :birth_date, :gender, :preferred_destinations, :travel_style, :mbti)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":nickname", nickname);
    query.bindValue(":birth_date", birthDate);
    query.bindValue(":gender", gender);
    query.bindValue(":preferred_destinations", preferredDestinations);
    query.bindValue(":travel_style", travelStyle);
    query.bindValue(":mbti", mbti);

    if (query.exec()) {
        QMessageBox::information(this, "회원가입", "회원가입이 성공적으로 완료되었습니다.");
        this->close();
    } else {
        QMessageBox::critical(this, "오류", "회원가입에 실패했습니다: " + query.lastError().text());
    }
}
