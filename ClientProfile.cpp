#include "ClientProfile.h"
#include "ui_ClientProfile.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDate>
#include <QMessageBox>

ClientProfile::ClientProfile(const QString &nickname, QWidget *parent)
    : QWidget(parent), ui(new Ui::ClientProfile) {
    ui->setupUi(this);

    // 데이터베이스에서 사용자 정보 조회
    QSqlQuery query;
    query.prepare("SELECT nickname, birth_date, gender, preferred_destinations, travel_style, mbti "
                  "FROM users WHERE nickname = :nickname");
    query.bindValue(":nickname", nickname);

    if (query.exec() && query.next()) {
        // UI에 데이터 반영
        ui->nicknameLabel->setText("닉네임: " + query.value("nickname").toString());

        // 생년월일에서 나이를 계산
        QString birthDateStr = query.value("birth_date").toString();
        if (!birthDateStr.isEmpty()) {
            QDate birthDate = QDate::fromString(birthDateStr, "yyyy-MM-dd");
            if (birthDate.isValid()) {
                int age = QDate::currentDate().year() - birthDate.year();
                ui->ageLabel->setText("나이(만): " + QString::number(age));
            } else {
                ui->ageLabel->setText("나이: 알 수 없음");
            }
        }

        // 성별, 선호 지역, 여행 스타일, MBTI 표시
        ui->genderLabel->setText("성별: " + query.value("gender").toString());
        ui->preferredDestinationsLabel->setText( query.value("preferred_destinations").toString());
        ui->travelStyleLabel->setText(query.value("travel_style").toString());
        ui->mbtiLabel->setText("MBTI: " + query.value("mbti").toString());
    } else {
        QMessageBox::warning(this, "오류", "사용자 정보를 불러오는 데 실패했습니다: " + query.lastError().text());
    }

    // 닫기 버튼 연결
    connect(ui->closeButton, &QPushButton::clicked, this, &ClientProfile::close);
}

ClientProfile::~ClientProfile() {
    delete ui;
}
