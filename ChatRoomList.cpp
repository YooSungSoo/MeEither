#include "ChatRoomList.h"
#include "ui_ChatRoomList.h"
#include "ChatWindow.h"
#include <QInputDialog>
#include <QMessageBox>
#include <QDebug>

ChatRoomList::ChatRoomList(const QString &nickname, QWidget *parent)
    : QWidget(parent), ui(new Ui::ChatRoomList) {
    ui->setupUi(this);

    // 사용자 정보 표시
    ui->myInformation->setText("닉네임: " + nickname);
    this->nickname = nickname;

    // 테이블 초기화
    ui->userInfoTable->setColumnCount(3);
    ui->userInfoTable->setHorizontalHeaderLabels({"닉네임", "나이", "성별"});
    ui->userInfoTable->horizontalHeader()->setStretchLastSection(true);
    ui->userInfoTable->setSelectionBehavior(QAbstractItemView::SelectRows);

    // 버튼 클릭 시 슬롯 연결
    connect(ui->createRoomButton, &QPushButton::clicked, this, &ChatRoomList::onCreateRoomClicked);
    connect(ui->joinRoomButton, &QPushButton::clicked, this, &ChatRoomList::onJoinRoomClicked);
}

ChatRoomList::~ChatRoomList() {
    delete ui;
}

void ChatRoomList::addUserToTable(const QString &nickname, int age, const QString &gender) {
    int row = ui->userInfoTable->rowCount();
    ui->userInfoTable->insertRow(row);
    ui->userInfoTable->setItem(row, 0, new QTableWidgetItem(nickname));
    ui->userInfoTable->setItem(row, 1, new QTableWidgetItem(QString::number(age)));
    ui->userInfoTable->setItem(row, 2, new QTableWidgetItem(gender));
}

void ChatRoomList::onCreateRoomClicked() {
    bool ok;
    QString roomName = QInputDialog::getText(this, "채팅방 생성",
                                             "채팅방 이름을 입력하세요:",
                                             QLineEdit::Normal, "", &ok);

    if (!ok || roomName.isEmpty()) {
        QMessageBox::warning(this, "경고", "유효한 채팅방 이름을 입력하세요.");
        return;
    }

    ui->chatRoomListWidget->addItem(roomName);
    QMessageBox::information(this, "채팅방 생성", roomName + " 방이 생성되었습니다.");
}

void ChatRoomList::onJoinRoomClicked() {
    QListWidgetItem *selectedRoom = ui->chatRoomListWidget->currentItem();
    if (selectedRoom) {
        QString roomName = selectedRoom->text();

        // ChatWindow 생성 및 닉네임과 방 이름 전달
        ChatWindow *chatWindow = new ChatWindow();
        chatWindow->setRoomName(roomName);
        chatWindow->setNickname(nickname);
        chatWindow->show();
    } else {
        QMessageBox::warning(this, "경고", "입장할 채팅방을 선택하세요.");
    }
}
