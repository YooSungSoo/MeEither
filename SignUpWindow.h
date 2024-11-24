#ifndef SIGNUPWINDOW_H
#define SIGNUPWINDOW_H

#include <QWidget>

namespace Ui {
class SignUpWindow;
}

class SignUpWindow : public QWidget {
    Q_OBJECT

public:
    explicit SignUpWindow(QWidget *parent = nullptr);
    ~SignUpWindow();

private slots:
    void onSignUpButtonClicked();
    void onCheckUsernameClicked(); // 중복 확인 메서드

private:
    Ui::SignUpWindow *ui;
};

#endif // SIGNUPWINDOW_H
