/********************************************************************************
** Form generated from reading UI file 'SignUpWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOW_H
#define UI_SIGNUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUpWindow
{
public:
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *signUpButton;
    QLineEdit *nickName;
    QCheckBox *checkBoxM;
    QCheckBox *checkBoxF;
    QDateEdit *birthDateEdit;
    QPushButton *conform;

    void setupUi(QWidget *SignUpWindow)
    {
        if (SignUpWindow->objectName().isEmpty())
            SignUpWindow->setObjectName("SignUpWindow");
        SignUpWindow->resize(424, 295);
        usernameLineEdit = new QLineEdit(SignUpWindow);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(70, 30, 141, 31));
        passwordLineEdit = new QLineEdit(SignUpWindow);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(70, 70, 141, 31));
        passwordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        signUpButton = new QPushButton(SignUpWindow);
        signUpButton->setObjectName("signUpButton");
        signUpButton->setGeometry(QRect(220, 170, 71, 31));
        nickName = new QLineEdit(SignUpWindow);
        nickName->setObjectName("nickName");
        nickName->setGeometry(QRect(70, 130, 141, 31));
        checkBoxM = new QCheckBox(SignUpWindow);
        checkBoxM->setObjectName("checkBoxM");
        checkBoxM->setGeometry(QRect(80, 170, 51, 31));
        checkBoxF = new QCheckBox(SignUpWindow);
        checkBoxF->setObjectName("checkBoxF");
        checkBoxF->setGeometry(QRect(150, 170, 51, 31));
        birthDateEdit = new QDateEdit(SignUpWindow);
        birthDateEdit->setObjectName("birthDateEdit");
        birthDateEdit->setGeometry(QRect(220, 130, 151, 31));
        conform = new QPushButton(SignUpWindow);
        conform->setObjectName("conform");
        conform->setGeometry(QRect(220, 30, 71, 31));

        retranslateUi(SignUpWindow);

        QMetaObject::connectSlotsByName(SignUpWindow);
    } // setupUi

    void retranslateUi(QWidget *SignUpWindow)
    {
        SignUpWindow->setWindowTitle(QCoreApplication::translate("SignUpWindow", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("SignUpWindow", "\354\225\204\354\235\264\353\224\224 \354\236\205\353\240\245", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("SignUpWindow", "\353\271\204\353\260\200\353\262\210\355\230\270 \354\236\205\353\240\245", nullptr));
        signUpButton->setText(QCoreApplication::translate("SignUpWindow", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        nickName->setText(QString());
        nickName->setPlaceholderText(QCoreApplication::translate("SignUpWindow", "\353\213\211\353\204\244\354\236\204 \354\236\205\353\240\245", nullptr));
        checkBoxM->setText(QCoreApplication::translate("SignUpWindow", "\353\202\250\354\236\220", nullptr));
        checkBoxF->setText(QCoreApplication::translate("SignUpWindow", "\354\227\254\354\236\220", nullptr));
        conform->setText(QCoreApplication::translate("SignUpWindow", "\354\244\221\353\263\265\355\231\225\354\235\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpWindow: public Ui_SignUpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
