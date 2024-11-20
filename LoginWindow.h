#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include "SignUpWindow.h" // SignUpWindow 클래스 포함
#include "ChatRoomList.h"


namespace Ui {
class LoginWindow;
}

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void onLoginButtonClicked();
    void onSignUpButtonClicked();

private:
    Ui::LoginWindow *ui;
    SignUpWindow *signUpWindow; // 회원가입 창 포인터 멤버 변수 추가
    ChatRoomList *chatRoomList;

signals:
    void loginSuccessful(const QString &username); // 로그인 성공 시그널

};

#endif // LOGINWINDOW_H
