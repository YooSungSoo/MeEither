#include "ChooseLand.h"
#include "ui_ChooseLand.h"
#include "ChatRoomList.h"

ChooseLand::ChooseLand(const QString &nickname, QWidget *parent)
    : QWidget(parent), ui(new Ui::ChooseLand), nickname(nickname) {
    ui->setupUi(this);

    // 모든 버튼에 대해 슬롯 연결
    connect(ui->northEuropeButton, &QPushButton::clicked, this, &ChooseLand::onContinentSelected);
    connect(ui->westEuropeButton, &QPushButton::clicked, this, &ChooseLand::onContinentSelected);
    connect(ui->eastEuropeButton, &QPushButton::clicked, this, &ChooseLand::onContinentSelected);
    connect(ui->eurasiaButton, &QPushButton::clicked, this, &ChooseLand::onContinentSelected);
    connect(ui->centralAsiaButton, &QPushButton::clicked, this, &ChooseLand::onContinentSelected);
    connect(ui->eastAsiaButton, &QPushButton::clicked, this, &ChooseLand::onContinentSelected);
    connect(ui->southEastAsiaButton, &QPushButton::clicked, this, &ChooseLand::onContinentSelected);
    connect(ui->oceaniaButton, &QPushButton::clicked, this, &ChooseLand::onContinentSelected);
    connect(ui->northAmericaButton, &QPushButton::clicked, this, &ChooseLand::onContinentSelected);
    connect(ui->southAmericaButton, &QPushButton::clicked, this, &ChooseLand::onContinentSelected);
    connect(ui->antarcticaButton, &QPushButton::clicked, this, &ChooseLand::onContinentSelected);
    connect(ui->arcticButton, &QPushButton::clicked, this, &ChooseLand::onContinentSelected);
}

ChooseLand::~ChooseLand() {
    delete ui;
}

void ChooseLand::onContinentSelected() {
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        QString continent = button->text();
        qDebug() << "선택된 대륙:" << continent;

        // ChatRoomList로 이동
        ChatRoomList *chatRoomList = new ChatRoomList(nickname, continent);
        chatRoomList->show();
        this->close(); // 현재 ChooseLand 닫기
    }
}
