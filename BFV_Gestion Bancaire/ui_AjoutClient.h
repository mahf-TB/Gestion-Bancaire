/********************************************************************************
** Form generated from reading UI file 'AjoutClient.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTCLIENT_H
#define UI_AJOUTCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AjoutClient
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QFormLayout *formLayout_2;
    QLabel *nomLabel_2;
    QLineEdit *nomLineEdit_2;
    QLabel *prenomLabel_2;
    QLineEdit *prenomLineEdit_2;
    QLabel *nDeCompteLabel_2;
    QLineEdit *adresseLineEdit_2;
    QLabel *soldeLabel_2;
    QLineEdit *emailLineEdit_2;
    QLabel *label_5;
    QLineEdit *telephoneLineEdit;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QWidget *page_1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *nomLabel;
    QLineEdit *nCompteLineEdit;
    QLabel *prenomLabel;
    QLineEdit *soldeLineEdit_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label_2;

    void setupUi(QDialog *AjoutClient)
    {
        if (AjoutClient->objectName().isEmpty())
            AjoutClient->setObjectName("AjoutClient");
        AjoutClient->resize(600, 700);
        AjoutClient->setMinimumSize(QSize(600, 700));
        AjoutClient->setMaximumSize(QSize(600, 700));
        AjoutClient->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background:#EEE;\n"
"	color:#000;\n"
"}\n"
"QLabel{\n"
"	color:#000;\n"
"}\n"
"QLineEdit{\n"
"	height:30px;\n"
"	background:#EEE;\n"
"	color:#000;\n"
"	border:none;\n"
"	border-bottom: 1px solid #000;\n"
"}\n"
"QWidget{\n"
"	width:300px;\n"
"}\n"
"QPushButton{\n"
"	Background:#111;\n"
"}"));
        gridLayout = new QGridLayout(AjoutClient);
        gridLayout->setObjectName("gridLayout");
        stackedWidget = new QStackedWidget(AjoutClient);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMaximumSize(QSize(500, 16777215));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(200, 80));
        label_4->setMaximumSize(QSize(16777215, 80));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Resources/image/Logo_BFV.png")));
        label_4->setScaledContents(true);

        verticalLayout_2->addWidget(label_4);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_2->setFormAlignment(Qt::AlignCenter);
        formLayout_2->setVerticalSpacing(50);
        formLayout_2->setContentsMargins(-1, -1, 0, -1);
        nomLabel_2 = new QLabel(page);
        nomLabel_2->setObjectName("nomLabel_2");
        nomLabel_2->setMinimumSize(QSize(0, 25));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(16);
        nomLabel_2->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, nomLabel_2);

        nomLineEdit_2 = new QLineEdit(page);
        nomLineEdit_2->setObjectName("nomLineEdit_2");
        nomLineEdit_2->setMinimumSize(QSize(0, 30));
        nomLineEdit_2->setMaximumSize(QSize(16777215, 16777215));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, nomLineEdit_2);

        prenomLabel_2 = new QLabel(page);
        prenomLabel_2->setObjectName("prenomLabel_2");
        prenomLabel_2->setMinimumSize(QSize(0, 25));
        prenomLabel_2->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, prenomLabel_2);

        prenomLineEdit_2 = new QLineEdit(page);
        prenomLineEdit_2->setObjectName("prenomLineEdit_2");
        prenomLineEdit_2->setMinimumSize(QSize(0, 30));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, prenomLineEdit_2);

        nDeCompteLabel_2 = new QLabel(page);
        nDeCompteLabel_2->setObjectName("nDeCompteLabel_2");
        nDeCompteLabel_2->setMinimumSize(QSize(0, 25));
        nDeCompteLabel_2->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, nDeCompteLabel_2);

        adresseLineEdit_2 = new QLineEdit(page);
        adresseLineEdit_2->setObjectName("adresseLineEdit_2");
        adresseLineEdit_2->setMinimumSize(QSize(0, 30));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, adresseLineEdit_2);

        soldeLabel_2 = new QLabel(page);
        soldeLabel_2->setObjectName("soldeLabel_2");
        soldeLabel_2->setMinimumSize(QSize(0, 25));
        soldeLabel_2->setFont(font);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, soldeLabel_2);

        emailLineEdit_2 = new QLineEdit(page);
        emailLineEdit_2->setObjectName("emailLineEdit_2");
        emailLineEdit_2->setMinimumSize(QSize(0, 30));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, emailLineEdit_2);

        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_5);

        telephoneLineEdit = new QLineEdit(page);
        telephoneLineEdit->setObjectName("telephoneLineEdit");

        formLayout_2->setWidget(4, QFormLayout::FieldRole, telephoneLineEdit);

        pushButton_9 = new QPushButton(page);
        pushButton_9->setObjectName("pushButton_9");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        font1.setBold(true);
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("height:25px;"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, pushButton_9);

        pushButton_10 = new QPushButton(page);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setFont(font1);
        pushButton_10->setStyleSheet(QString::fromUtf8("height:25px;"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, pushButton_10);


        verticalLayout_2->addLayout(formLayout_2);

        stackedWidget->addWidget(page);
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        page_1->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(page_1);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(page_1);
        label->setObjectName("label");
        label->setMinimumSize(QSize(200, 80));
        label->setMaximumSize(QSize(16777215, 80));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/image/Logo_BFV.png")));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout->setFormAlignment(Qt::AlignCenter);
        formLayout->setVerticalSpacing(50);
        formLayout->setContentsMargins(-1, -1, 0, -1);
        nomLabel = new QLabel(page_1);
        nomLabel->setObjectName("nomLabel");
        nomLabel->setMinimumSize(QSize(0, 25));
        nomLabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, nomLabel);

        nCompteLineEdit = new QLineEdit(page_1);
        nCompteLineEdit->setObjectName("nCompteLineEdit");
        nCompteLineEdit->setMinimumSize(QSize(0, 30));
        nCompteLineEdit->setMaximumSize(QSize(16777215, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, nCompteLineEdit);

        prenomLabel = new QLabel(page_1);
        prenomLabel->setObjectName("prenomLabel");
        prenomLabel->setMinimumSize(QSize(0, 25));
        prenomLabel->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, prenomLabel);

        soldeLineEdit_2 = new QLineEdit(page_1);
        soldeLineEdit_2->setObjectName("soldeLineEdit_2");
        soldeLineEdit_2->setMinimumSize(QSize(0, 30));

        formLayout->setWidget(1, QFormLayout::FieldRole, soldeLineEdit_2);

        pushButton_7 = new QPushButton(page_1);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("height:25px;"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton_7);

        pushButton_8 = new QPushButton(page_1);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("height:25px;"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_8);


        verticalLayout->addLayout(formLayout);

        stackedWidget->addWidget(page_1);

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 1);

        label_2 = new QLabel(AjoutClient);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 1, 1, 1);


        retranslateUi(AjoutClient);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AjoutClient);
    } // setupUi

    void retranslateUi(QDialog *AjoutClient)
    {
        AjoutClient->setWindowTitle(QCoreApplication::translate("AjoutClient", "Dialog", nullptr));
        label_4->setText(QString());
        nomLabel_2->setText(QCoreApplication::translate("AjoutClient", "Nom", nullptr));
        prenomLabel_2->setText(QCoreApplication::translate("AjoutClient", "Prenom", nullptr));
        nDeCompteLabel_2->setText(QCoreApplication::translate("AjoutClient", "Adresse", nullptr));
        soldeLabel_2->setText(QCoreApplication::translate("AjoutClient", "Email", nullptr));
        label_5->setText(QCoreApplication::translate("AjoutClient", "Telephone", nullptr));
        pushButton_9->setText(QCoreApplication::translate("AjoutClient", "Annuler", nullptr));
        pushButton_10->setText(QCoreApplication::translate("AjoutClient", "Suivant", nullptr));
        label->setText(QString());
        nomLabel->setText(QCoreApplication::translate("AjoutClient", "N\302\260 de Compte", nullptr));
        prenomLabel->setText(QCoreApplication::translate("AjoutClient", "Solde", nullptr));
        pushButton_7->setText(QCoreApplication::translate("AjoutClient", "Retour", nullptr));
        pushButton_8->setText(QCoreApplication::translate("AjoutClient", "Terminer", nullptr));
        label_2->setText(QCoreApplication::translate("AjoutClient", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutClient: public Ui_AjoutClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTCLIENT_H
