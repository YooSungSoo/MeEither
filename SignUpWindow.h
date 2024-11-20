#ifndef SIGNUPWINDOW_H
#define SIGNUPWINDOW_H

#include <QWidget>

namespace Ui {
class SignUpWindow;
}

class SignUpWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SignUpWindow(QWidget *parent = nullptr);
    ~SignUpWindow();

private slots:
    void onSignUpButtonClicked(); // 회원가입 버튼 처리
    void onCheckUsernameClicked(); // 아이디 중복 확인

private:
    Ui::SignUpWindow *ui;
};

#endif // SIGNUPWINDOW_H
