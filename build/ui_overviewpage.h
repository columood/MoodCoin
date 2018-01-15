/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QLabel *label_2;
    QPushButton *unlockWalletButton;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_3;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *labelUnconfirmed;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QFrame *line;
    QLabel *labelTotalText;
    QLabel *labelTotal;
    QLabel *labelStake;
    QLabel *labelBalance;
    QLabel *label;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(960, 567);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OverviewPage->sizePolicy().hasHeightForWidth());
        OverviewPage->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(207, 207, 207, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush2(QColor(172, 172, 172, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(178, 178, 178, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        QBrush brush5(QColor(255, 80, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush3);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush5);
        palette.setBrush(QPalette::Active, QPalette::NoRole, brush5);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::NoRole, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::NoRole, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        OverviewPage->setPalette(palette);
        OverviewPage->setAutoFillBackground(true);
        label_2 = new QLabel(OverviewPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(9, 9, 256, 64));
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 80, 0);"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/Wallet_Logo")));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        unlockWalletButton = new QPushButton(OverviewPage);
        unlockWalletButton->setObjectName(QStringLiteral("unlockWalletButton"));
        unlockWalletButton->setGeometry(QRect(10, 520, 941, 27));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(unlockWalletButton->sizePolicy().hasHeightForWidth());
        unlockWalletButton->setSizePolicy(sizePolicy1);
        unlockWalletButton->setMaximumSize(QSize(16777214, 16777214));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        unlockWalletButton->setPalette(palette1);
        unlockWalletButton->setAutoFillBackground(false);
        unlockWalletButton->setStyleSheet(QLatin1String("background-color: rgb(178, 178, 178);\n"
"color: rgb(255,255,255);"));
        unlockWalletButton->setCheckable(false);
        unlockWalletButton->setAutoDefault(false);
        unlockWalletButton->setFlat(false);
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 80, 941, 198));
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush6(QColor(138, 138, 138, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        QBrush brush7(QColor(69, 69, 69, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_5->setPalette(palette2);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_5->setAutoFillBackground(false);
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 80, 0);"));

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(frame);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setAutoFillBackground(false);
        labelWalletStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setHorizontalSpacing(12);
        formLayout_2->setVerticalSpacing(12);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_6->setPalette(palette3);
        label_6->setAutoFillBackground(false);
        label_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 80, 0);"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_3->setPalette(palette4);
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 80, 0);"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        labelUnconfirmed->setPalette(palette5);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelUnconfirmed->setFont(font1);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setAutoFillBackground(false);
        labelUnconfirmed->setStyleSheet(QStringLiteral("background-color: rgb(255, 80, 0);"));
        labelUnconfirmed->setText(QStringLiteral("0 MDC"));
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, labelUnconfirmed);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        labelImmatureText->setPalette(palette6);
        labelImmatureText->setAutoFillBackground(false);
        labelImmatureText->setStyleSheet(QStringLiteral("background-color: rgb(255, 80, 0);"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, labelImmatureText);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        labelImmature->setPalette(palette7);
        labelImmature->setFont(font1);
        labelImmature->setAutoFillBackground(false);
        labelImmature->setStyleSheet(QStringLiteral("background-color: rgb(255, 80, 0);"));
        labelImmature->setText(QStringLiteral("0 MDC"));
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, labelImmature);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setAutoFillBackground(true);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, line);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        labelTotalText->setPalette(palette8);
        labelTotalText->setAutoFillBackground(false);
        labelTotalText->setStyleSheet(QStringLiteral("background-color: rgb(255, 80, 0);"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, labelTotalText);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        labelTotal->setPalette(palette9);
        labelTotal->setFont(font1);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setAutoFillBackground(false);
        labelTotal->setStyleSheet(QStringLiteral("background-color: rgb(255, 80, 0);"));
        labelTotal->setText(QStringLiteral("0 BTC"));
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, labelTotal);

        labelStake = new QLabel(frame);
        labelStake->setObjectName(QStringLiteral("labelStake"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        labelStake->setPalette(palette10);
        labelStake->setFont(font1);
        labelStake->setCursor(QCursor(Qt::IBeamCursor));
        labelStake->setAutoFillBackground(false);
        labelStake->setStyleSheet(QStringLiteral("background-color: rgb(255, 80, 0);"));
        labelStake->setText(QStringLiteral("0 MDC"));
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelStake);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        labelBalance->setPalette(palette11);
        labelBalance->setFont(font1);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setAutoFillBackground(false);
        labelBalance->setStyleSheet(QStringLiteral("background-color: rgb(255, 80, 0);"));
        labelBalance->setText(QStringLiteral("0 MDC"));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelBalance);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label->setPalette(palette12);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QStringLiteral("background-color: rgb(255, 80, 0);"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);


        verticalLayout_4->addLayout(formLayout_2);

        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 280, 941, 231));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        frame_2->setPalette(palette13);
        frame_2->setAutoFillBackground(true);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAutoFillBackground(false);
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 80, 0);"));

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        QPalette palette14;
        QBrush brush8(QColor(255, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush8);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush8);
        labelTransactionsStatus->setPalette(palette14);
        labelTransactionsStatus->setAutoFillBackground(false);
        labelTransactionsStatus->setStyleSheet(QLatin1String("QLabel { color: red; }\n"
"background-color: rgb(255, 80, 0);"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush9(QColor(0, 0, 0, 0));
        brush9.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush10(QColor(0, 0, 0, 255));
        brush10.setStyle(Qt::NoBrush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette15.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette15.setBrush(QPalette::Active, QPalette::NoRole, brush3);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush11(QColor(0, 0, 0, 255));
        brush11.setStyle(Qt::NoBrush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush11);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette15.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::NoRole, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush12(QColor(0, 0, 0, 255));
        brush12.setStyle(Qt::NoBrush);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette15.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::NoRole, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush3);
        listTransactions->setPalette(palette15);
        listTransactions->setAutoFillBackground(true);
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        retranslateUi(OverviewPage);

        unlockWalletButton->setDefault(true);


        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0));
        label_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        unlockWalletButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        unlockWalletButton->setText(QApplication::translate("OverviewPage", "Wallet Unlock Button", 0));
        label_5->setText(QApplication::translate("OverviewPage", "Wallet", 0));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Moodcoin network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("OverviewPage", "Stake:", 0));
        label_3->setText(QApplication::translate("OverviewPage", "Unconfirmed:", 0));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the current balance", 0));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", 0));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", 0));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelStake->setToolTip(QApplication::translate("OverviewPage", "Total of coins that was staked, and do not yet count toward the current balance", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("OverviewPage", "Spendable:", 0));
        label_4->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><span style=\" font-weight:600; color:#ffffff;\">Recent transactions</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Moodcoin network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
