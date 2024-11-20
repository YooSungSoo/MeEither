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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUpWindow
{
public:
    QLabel *headerLabel;
    QLineEdit *usernameLineEdit;
    QPushButton *conform;
    QLineEdit *passwordLineEdit;
    QLineEdit *nickName;
    QDateEdit *birthDateEdit;
    QGroupBox *genderGroupBox;
    QRadioButton *checkBoxM;
    QRadioButton *checkBoxF;
    QPushButton *signUpButton;

    void setupUi(QWidget *SignUpWindow)
    {
        if (SignUpWindow->objectName().isEmpty())
            SignUpWindow->setObjectName("SignUpWindow");
        SignUpWindow->resize(450, 400);
        headerLabel = new QLabel(SignUpWindow);
        headerLabel->setObjectName("headerLabel");
        headerLabel->setGeometry(QRect(100, 20, 250, 40));
        headerLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        usernameLineEdit = new QLineEdit(SignUpWindow);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(100, 80, 250, 30));
        conform = new QPushButton(SignUpWindow);
        conform->setObjectName("conform");
        conform->setGeometry(QRect(360, 80, 80, 30));
        passwordLineEdit = new QLineEdit(SignUpWindow);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(100, 130, 250, 30));
        passwordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        nickName = new QLineEdit(SignUpWindow);
        nickName->setObjectName("nickName");
        nickName->setGeometry(QRect(100, 180, 250, 30));
        birthDateEdit = new QDateEdit(SignUpWindow);
        birthDateEdit->setObjectName("birthDateEdit");
        birthDateEdit->setGeometry(QRect(100, 230, 250, 30));
        genderGroupBox = new QGroupBox(SignUpWindow);
        genderGroupBox->setObjectName("genderGroupBox");
        genderGroupBox->setGeometry(QRect(100, 280, 250, 60));
        checkBoxM = new QRadioButton(genderGroupBox);
        checkBoxM->setObjectName("checkBoxM");
        checkBoxM->setGeometry(QRect(20, 20, 100, 20));
        checkBoxF = new QRadioButton(genderGroupBox);
        checkBoxF->setObjectName("checkBoxF");
        checkBoxF->setGeometry(QRect(120, 20, 100, 20));
        signUpButton = new QPushButton(SignUpWindow);
        signUpButton->setObjectName("signUpButton");
        signUpButton->setGeometry(QRect(170, 350, 100, 40));

        retranslateUi(SignUpWindow);

        QMetaObject::connectSlotsByName(SignUpWindow);
    } // setupUi

    void retranslateUi(QWidget *SignUpWindow)
    {
        SignUpWindow->setWindowTitle(QCoreApplication::translate("SignUpWindow", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        SignUpWindow->setStyleSheet(QCoreApplication::translate("SignUpWindow", "\n"
"    QWidget {\n"
"        background-color: #f9f9f9;\n"
"        font-family: Arial, sans-serif;\n"
"    }\n"
"    QPushButton {\n"
"        background-color: #87ceeb;\n"
"        border: 1px solid #4682b4;\n"
"        border-radius: 8px;\n"
"        color: white;\n"
"        font-weight: bold;\n"
"        padding: 5px 10px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #4682b4;\n"
"    }\n"
"    QLineEdit {\n"
"        border: 1px solid #87ceeb;\n"
"        border-radius: 5px;\n"
"        padding: 5px;\n"
"    }\n"
"    QLabel {\n"
"        font-size: 12px;\n"
"        color: #666666;\n"
"    }\n"
"   ", nullptr));
        headerLabel->setStyleSheet(QCoreApplication::translate("SignUpWindow", "\n"
"     QLabel {\n"
"         font-size: 24px;\n"
"         font-weight: bold;\n"
"         color: #4682b4;\n"
"     }\n"
"    ", nullptr));
        headerLabel->setText(QCoreApplication::translate("SignUpWindow", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("SignUpWindow", "\354\225\204\354\235\264\353\224\224 \354\236\205\353\240\245", nullptr));
        conform->setText(QCoreApplication::translate("SignUpWindow", "\354\244\221\353\263\265\355\231\225\354\235\270", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("SignUpWindow", "\353\271\204\353\260\200\353\262\210\355\230\270 \354\236\205\353\240\245", nullptr));
        nickName->setPlaceholderText(QCoreApplication::translate("SignUpWindow", "\353\213\211\353\204\244\354\236\204 \354\236\205\353\240\245", nullptr));
        genderGroupBox->setTitle(QCoreApplication::translate("SignUpWindow", "\354\204\261\353\263\204", nullptr));
        checkBoxM->setText(QCoreApplication::translate("SignUpWindow", "\353\202\250\354\236\220", nullptr));
        checkBoxF->setText(QCoreApplication::translate("SignUpWindow", "\354\227\254\354\236\220", nullptr));
        signUpButton->setText(QCoreApplication::translate("SignUpWindow", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpWindow: public Ui_SignUpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
