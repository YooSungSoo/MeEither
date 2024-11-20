#include "ChatRoomList.h"
#include "ui_ChatRoomList.h"
#include "ChatWindow.h" // ChatWindow 헤더 추가
#include <QInputDialog>
#include <QMessageBox>
#include <QDebug>

ChatRoomList::ChatRoomList(const QString &username, QWidget *parent)
    : QWidget(parent), ui(new Ui::ChatRoomList) {
    ui->setupUi(this);

    // 사용자 정보 표시
    ui->myInformation->setText("닉네임: " + username);

    // 버튼 클릭 시 슬롯 연결
    connect(ui->createRoomButton, &QPushButton::clicked, this, &ChatRoomList::onCreateRoomClicked);
    connect(ui->joinRoomButton, &QPushButton::clicked, this, &ChatRoomList::onJoinRoomClicked);

    // 닉네임 저장
    this->username = username;
}

ChatRoomList::~ChatRoomList() {
    delete ui;
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
        chatWindow->setNickname(username); // 닉네임 전달
        chatWindow->show();

        // ChatWindow 관리를 위해 리스트에 추가
        openChatWindows.append(chatWindow);

        // 디버그 정보 출력
        qDebug() << "채팅방 열림: " << roomName;
    } else {
        QMessageBox::warning(this, "경고", "입장할 채팅방을 선택하세요.");
    }
}
