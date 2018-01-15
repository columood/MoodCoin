/********************************************************************************
** Form generated from reading UI file 'signverifymessagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNVERIFYMESSAGEDIALOG_H
#define UI_SIGNVERIFYMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SignVerifyMessageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabSignMessage;
    QVBoxLayout *verticalLayout_SM;
    QLabel *infoLabel_SM;
    QHBoxLayout *horizontalLayout_1_SM;
    QValidatedLineEdit *addressIn_SM;
    QPushButton *addressBookButton_SM;
    QPushButton *pasteButton_SM;
    QPlainTextEdit *messageIn_SM;
    QHBoxLayout *horizontalLayout_2_SM;
    QLineEdit *signatureOut_SM;
    QPushButton *copySignatureButton_SM;
    QHBoxLayout *horizontalLayout_3_SM;
    QPushButton *signMessageButton_SM;
    QPushButton *clearButton_SM;
    QSpacerItem *horizontalSpacer_1_SM;
    QLabel *statusLabel_SM;
    QSpacerItem *horizontalSpacer_2_SM;
    QWidget *tabVerifyMessage;
    QVBoxLayout *verticalLayout_VM;
    QLabel *infoLabel_VM;
    QHBoxLayout *horizontalLayout_1_VM;
    QValidatedLineEdit *addressIn_VM;
    QPushButton *addressBookButton_VM;
    QPlainTextEdit *messageIn_VM;
    QValidatedLineEdit *signatureIn_VM;
    QHBoxLayout *horizontalLayout_2_VM;
    QPushButton *verifyMessageButton_VM;
    QPushButton *clearButton_VM;
    QSpacerItem *horizontalSpacer_1_VM;
    QLabel *statusLabel_VM;
    QSpacerItem *horizontalSpacer_2_VM;

    void setupUi(QDialog *SignVerifyMessageDialog)
    {
        if (SignVerifyMessageDialog->objectName().isEmpty())
            SignVerifyMessageDialog->setObjectName(QStringLiteral("SignVerifyMessageDialog"));
        SignVerifyMessageDialog->resize(700, 380);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(207, 207, 207, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(172, 172, 172, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(69, 69, 69, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(92, 92, 92, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush6(QColor(255, 80, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(196, 196, 196, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        SignVerifyMessageDialog->setPalette(palette);
        SignVerifyMessageDialog->setModal(true);
        verticalLayout = new QVBoxLayout(SignVerifyMessageDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(SignVerifyMessageDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QPalette palette1;
        QBrush brush9(QColor(90, 104, 118, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        QBrush brush10(QColor(138, 138, 138, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush9);
        tabWidget->setPalette(palette1);
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(255, 80, 0);"));
        tabSignMessage = new QWidget();
        tabSignMessage->setObjectName(QStringLiteral("tabSignMessage"));
        verticalLayout_SM = new QVBoxLayout(tabSignMessage);
        verticalLayout_SM->setObjectName(QStringLiteral("verticalLayout_SM"));
        infoLabel_SM = new QLabel(tabSignMessage);
        infoLabel_SM->setObjectName(QStringLiteral("infoLabel_SM"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        infoLabel_SM->setPalette(palette2);
        infoLabel_SM->setTextFormat(Qt::PlainText);
        infoLabel_SM->setWordWrap(true);

        verticalLayout_SM->addWidget(infoLabel_SM);

        horizontalLayout_1_SM = new QHBoxLayout();
        horizontalLayout_1_SM->setSpacing(0);
        horizontalLayout_1_SM->setObjectName(QStringLiteral("horizontalLayout_1_SM"));
        addressIn_SM = new QValidatedLineEdit(tabSignMessage);
        addressIn_SM->setObjectName(QStringLiteral("addressIn_SM"));
        addressIn_SM->setStyleSheet(QLatin1String("background-color: rgb(178,178,178);\n"
"color: rgb(255,255,255);"));
        addressIn_SM->setMaxLength(34);

        horizontalLayout_1_SM->addWidget(addressIn_SM);

        addressBookButton_SM = new QPushButton(tabSignMessage);
        addressBookButton_SM->setObjectName(QStringLiteral("addressBookButton_SM"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton_SM->setIcon(icon);
        addressBookButton_SM->setAutoDefault(false);

        horizontalLayout_1_SM->addWidget(addressBookButton_SM);

        pasteButton_SM = new QPushButton(tabSignMessage);
        pasteButton_SM->setObjectName(QStringLiteral("pasteButton_SM"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton_SM->setIcon(icon1);
        pasteButton_SM->setAutoDefault(false);

        horizontalLayout_1_SM->addWidget(pasteButton_SM);


        verticalLayout_SM->addLayout(horizontalLayout_1_SM);

        messageIn_SM = new QPlainTextEdit(tabSignMessage);
        messageIn_SM->setObjectName(QStringLiteral("messageIn_SM"));
        messageIn_SM->setStyleSheet(QLatin1String("background-color: rgb(178,178,178);\n"
"color: rgb(255,255,255);"));

        verticalLayout_SM->addWidget(messageIn_SM);

        horizontalLayout_2_SM = new QHBoxLayout();
        horizontalLayout_2_SM->setSpacing(0);
        horizontalLayout_2_SM->setObjectName(QStringLiteral("horizontalLayout_2_SM"));
        signatureOut_SM = new QLineEdit(tabSignMessage);
        signatureOut_SM->setObjectName(QStringLiteral("signatureOut_SM"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush11(QColor(178, 178, 178, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        signatureOut_SM->setPalette(palette3);
        QFont font;
        font.setItalic(true);
        signatureOut_SM->setFont(font);
        signatureOut_SM->setStyleSheet(QLatin1String("background-color: rgb(178,178,178);\n"
"color: rgb(255,255,255);"));
        signatureOut_SM->setReadOnly(true);

        horizontalLayout_2_SM->addWidget(signatureOut_SM);

        copySignatureButton_SM = new QPushButton(tabSignMessage);
        copySignatureButton_SM->setObjectName(QStringLiteral("copySignatureButton_SM"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/editcopy"), QSize(), QIcon::Normal, QIcon::Off);
        copySignatureButton_SM->setIcon(icon2);
        copySignatureButton_SM->setAutoDefault(false);

        horizontalLayout_2_SM->addWidget(copySignatureButton_SM);


        verticalLayout_SM->addLayout(horizontalLayout_2_SM);

        horizontalLayout_3_SM = new QHBoxLayout();
        horizontalLayout_3_SM->setObjectName(QStringLiteral("horizontalLayout_3_SM"));
        signMessageButton_SM = new QPushButton(tabSignMessage);
        signMessageButton_SM->setObjectName(QStringLiteral("signMessageButton_SM"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush11);
        QBrush brush12(QColor(240, 119, 70, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        signMessageButton_SM->setPalette(palette4);
        signMessageButton_SM->setStyleSheet(QLatin1String("background-color: rgb(178,178,178);\n"
"color: rgb(255,255,255);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/edit"), QSize(), QIcon::Normal, QIcon::Off);
        signMessageButton_SM->setIcon(icon3);
        signMessageButton_SM->setAutoDefault(false);

        horizontalLayout_3_SM->addWidget(signMessageButton_SM);

        clearButton_SM = new QPushButton(tabSignMessage);
        clearButton_SM->setObjectName(QStringLiteral("clearButton_SM"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette5.setBrush(QPalette::Active, QPalette::Highlight, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Highlight, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        clearButton_SM->setPalette(palette5);
        clearButton_SM->setStyleSheet(QLatin1String("background-color: rgb(178,178,178);\n"
"color: rgb(255,255,255);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton_SM->setIcon(icon4);
        clearButton_SM->setAutoDefault(false);

        horizontalLayout_3_SM->addWidget(clearButton_SM);

        horizontalSpacer_1_SM = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_SM->addItem(horizontalSpacer_1_SM);

        statusLabel_SM = new QLabel(tabSignMessage);
        statusLabel_SM->setObjectName(QStringLiteral("statusLabel_SM"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        statusLabel_SM->setFont(font1);
        statusLabel_SM->setWordWrap(true);

        horizontalLayout_3_SM->addWidget(statusLabel_SM);

        horizontalSpacer_2_SM = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_SM->addItem(horizontalSpacer_2_SM);


        verticalLayout_SM->addLayout(horizontalLayout_3_SM);

        tabWidget->addTab(tabSignMessage, QString());
        tabVerifyMessage = new QWidget();
        tabVerifyMessage->setObjectName(QStringLiteral("tabVerifyMessage"));
        verticalLayout_VM = new QVBoxLayout(tabVerifyMessage);
        verticalLayout_VM->setObjectName(QStringLiteral("verticalLayout_VM"));
        infoLabel_VM = new QLabel(tabVerifyMessage);
        infoLabel_VM->setObjectName(QStringLiteral("infoLabel_VM"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        QBrush brush13(QColor(159, 158, 158, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        infoLabel_VM->setPalette(palette6);
        infoLabel_VM->setStyleSheet(QStringLiteral("background-color: rgb(255, 80, 0);"));
        infoLabel_VM->setTextFormat(Qt::PlainText);
        infoLabel_VM->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        infoLabel_VM->setWordWrap(true);

        verticalLayout_VM->addWidget(infoLabel_VM);

        horizontalLayout_1_VM = new QHBoxLayout();
        horizontalLayout_1_VM->setSpacing(0);
        horizontalLayout_1_VM->setObjectName(QStringLiteral("horizontalLayout_1_VM"));
        addressIn_VM = new QValidatedLineEdit(tabVerifyMessage);
        addressIn_VM->setObjectName(QStringLiteral("addressIn_VM"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush9);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush9);
        addressIn_VM->setPalette(palette7);
        addressIn_VM->setStyleSheet(QLatin1String("background-color: rgb(178,178,178);\n"
"color: rgb(255,255,255);"));
        addressIn_VM->setMaxLength(34);

        horizontalLayout_1_VM->addWidget(addressIn_VM);

        addressBookButton_VM = new QPushButton(tabVerifyMessage);
        addressBookButton_VM->setObjectName(QStringLiteral("addressBookButton_VM"));
        addressBookButton_VM->setIcon(icon);
        addressBookButton_VM->setAutoDefault(false);

        horizontalLayout_1_VM->addWidget(addressBookButton_VM);


        verticalLayout_VM->addLayout(horizontalLayout_1_VM);

        messageIn_VM = new QPlainTextEdit(tabVerifyMessage);
        messageIn_VM->setObjectName(QStringLiteral("messageIn_VM"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush9);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush9);
        messageIn_VM->setPalette(palette8);
        messageIn_VM->setStyleSheet(QLatin1String("background-color: rgb(178,178,178);\n"
"color: rgb(255,255,255);"));

        verticalLayout_VM->addWidget(messageIn_VM);

        signatureIn_VM = new QValidatedLineEdit(tabVerifyMessage);
        signatureIn_VM->setObjectName(QStringLiteral("signatureIn_VM"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush9);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush9);
        signatureIn_VM->setPalette(palette9);
        signatureIn_VM->setStyleSheet(QLatin1String("background-color: rgb(178,178,178);\n"
"color: rgb(255,255,255);"));

        verticalLayout_VM->addWidget(signatureIn_VM);

        horizontalLayout_2_VM = new QHBoxLayout();
        horizontalLayout_2_VM->setObjectName(QStringLiteral("horizontalLayout_2_VM"));
        verifyMessageButton_VM = new QPushButton(tabVerifyMessage);
        verifyMessageButton_VM->setObjectName(QStringLiteral("verifyMessageButton_VM"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette10.setBrush(QPalette::Active, QPalette::Highlight, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::Highlight, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        verifyMessageButton_VM->setPalette(palette10);
        verifyMessageButton_VM->setStyleSheet(QLatin1String("background-color: rgb(178,178,178);\n"
"color: rgb(255,255,255);"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/transaction_0"), QSize(), QIcon::Normal, QIcon::Off);
        verifyMessageButton_VM->setIcon(icon5);
        verifyMessageButton_VM->setAutoDefault(false);

        horizontalLayout_2_VM->addWidget(verifyMessageButton_VM);

        clearButton_VM = new QPushButton(tabVerifyMessage);
        clearButton_VM->setObjectName(QStringLiteral("clearButton_VM"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush11);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush11);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush11);
        palette11.setBrush(QPalette::Active, QPalette::Highlight, brush12);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush11);
        palette11.setBrush(QPalette::Inactive, QPalette::Highlight, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        clearButton_VM->setPalette(palette11);
        clearButton_VM->setStyleSheet(QLatin1String("background-color: rgb(178,178,178);\n"
"color: rgb(255,255,255);"));
        clearButton_VM->setIcon(icon4);
        clearButton_VM->setAutoDefault(false);

        horizontalLayout_2_VM->addWidget(clearButton_VM);

        horizontalSpacer_1_VM = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_VM->addItem(horizontalSpacer_1_VM);

        statusLabel_VM = new QLabel(tabVerifyMessage);
        statusLabel_VM->setObjectName(QStringLiteral("statusLabel_VM"));
        statusLabel_VM->setFont(font1);
        statusLabel_VM->setWordWrap(true);

        horizontalLayout_2_VM->addWidget(statusLabel_VM);

        horizontalSpacer_2_VM = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_VM->addItem(horizontalSpacer_2_VM);


        verticalLayout_VM->addLayout(horizontalLayout_2_VM);

        tabWidget->addTab(tabVerifyMessage, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(SignVerifyMessageDialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SignVerifyMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *SignVerifyMessageDialog)
    {
        SignVerifyMessageDialog->setWindowTitle(QApplication::translate("SignVerifyMessageDialog", "Signatures - Sign / Verify a Message", 0));
        infoLabel_SM->setText(QApplication::translate("SignVerifyMessageDialog", "You can sign messages with your addresses to prove you own them. Be careful not to sign anything vague, as phishing attacks may try to trick you into signing your identity over to them. Only sign fully-detailed statements you agree to.", 0));
#ifndef QT_NO_TOOLTIP
        addressIn_SM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "The address to sign the message with (e.g. Sjz75uKHzUQJnSdzvpiigEGxseKkDhQToX)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addressBookButton_SM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Choose an address from the address book", 0));
#endif // QT_NO_TOOLTIP
        addressBookButton_SM->setText(QString());
        addressBookButton_SM->setShortcut(QApplication::translate("SignVerifyMessageDialog", "Alt+A", 0));
#ifndef QT_NO_TOOLTIP
        pasteButton_SM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Paste address from clipboard", 0));
#endif // QT_NO_TOOLTIP
        pasteButton_SM->setText(QString());
        pasteButton_SM->setShortcut(QApplication::translate("SignVerifyMessageDialog", "Alt+P", 0));
#ifndef QT_NO_TOOLTIP
        messageIn_SM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Enter the message you want to sign here", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        copySignatureButton_SM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Copy the current signature to the system clipboard", 0));
#endif // QT_NO_TOOLTIP
        copySignatureButton_SM->setText(QString());
#ifndef QT_NO_TOOLTIP
        signMessageButton_SM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Sign the message to prove you own this Moodcoin address", 0));
#endif // QT_NO_TOOLTIP
        signMessageButton_SM->setText(QApplication::translate("SignVerifyMessageDialog", "&Sign Message", 0));
#ifndef QT_NO_TOOLTIP
        clearButton_SM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Reset all sign message fields", 0));
#endif // QT_NO_TOOLTIP
        clearButton_SM->setText(QApplication::translate("SignVerifyMessageDialog", "Clear &All", 0));
        statusLabel_SM->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabSignMessage), QApplication::translate("SignVerifyMessageDialog", "&Sign Message", 0));
        infoLabel_VM->setText(QApplication::translate("SignVerifyMessageDialog", "Enter the signing address, message (ensure you copy line breaks, spaces, tabs, etc. exactly) and signature below to verify the message. Be careful not to read more into the signature than what is in the signed message itself, to avoid being tricked by a man-in-the-middle attack.", 0));
#ifndef QT_NO_TOOLTIP
        addressIn_VM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "The address the message was signed with (e.g. Sjz75uKHzUQJnSdzvpiigEGxseKkDhQToX)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addressBookButton_VM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Choose an address from the address book", 0));
#endif // QT_NO_TOOLTIP
        addressBookButton_VM->setText(QString());
        addressBookButton_VM->setShortcut(QApplication::translate("SignVerifyMessageDialog", "Alt+A", 0));
#ifndef QT_NO_TOOLTIP
        verifyMessageButton_VM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Verify the message to ensure it was signed with the specified Moodcoin address", 0));
#endif // QT_NO_TOOLTIP
        verifyMessageButton_VM->setText(QApplication::translate("SignVerifyMessageDialog", "&Verify Message", 0));
#ifndef QT_NO_TOOLTIP
        clearButton_VM->setToolTip(QApplication::translate("SignVerifyMessageDialog", "Reset all verify message fields", 0));
#endif // QT_NO_TOOLTIP
        clearButton_VM->setText(QApplication::translate("SignVerifyMessageDialog", "Clear &All", 0));
        statusLabel_VM->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabVerifyMessage), QApplication::translate("SignVerifyMessageDialog", "&Verify Message", 0));
    } // retranslateUi

};

namespace Ui {
    class SignVerifyMessageDialog: public Ui_SignVerifyMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNVERIFYMESSAGEDIALOG_H
