/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *sixButton;
    QPushButton *deleteButton;
    QPushButton *fourButton;
    QPushButton *substractButton;
    QPushButton *nineButton;
    QPushButton *leftButton;
    QPushButton *eightButton;
    QPushButton *zeroButton;
    QPushButton *twoButton;
    QPushButton *clearButton;
    QPushButton *threeButton;
    QPushButton *pointButton;
    QPushButton *oneButton;
    QPushButton *sevenButton;
    QPushButton *equalButton;
    QPushButton *multiplyButton;
    QPushButton *factorialButton;
    QPushButton *fiveButton;
    QPushButton *rightButton;
    QPushButton *divideButton;
    QPushButton *squareButton;
    QPushButton *addButton;
    QPushButton *modButton;
    QPushButton *sqrtButton;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *textBrowser;
    QPushButton *binaryButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 380);
        MainWindow->setMinimumSize(QSize(400, 380));
        MainWindow->setMaximumSize(QSize(400, 380));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 10, 171, 41));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 70, 201, 262));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        sixButton = new QPushButton(layoutWidget);
        sixButton->setObjectName("sixButton");
        sixButton->setMinimumSize(QSize(40, 40));
        sixButton->setMaximumSize(QSize(40, 40));
        QFont font;
        font.setPointSize(11);
        sixButton->setFont(font);

        gridLayout->addWidget(sixButton, 3, 2, 1, 1);

        deleteButton = new QPushButton(layoutWidget);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setMinimumSize(QSize(40, 40));
        deleteButton->setMaximumSize(QSize(40, 40));
        deleteButton->setFont(font);
        deleteButton->setIconSize(QSize(30, 30));

        gridLayout->addWidget(deleteButton, 0, 4, 1, 1);

        fourButton = new QPushButton(layoutWidget);
        fourButton->setObjectName("fourButton");
        fourButton->setMinimumSize(QSize(40, 40));
        fourButton->setMaximumSize(QSize(40, 40));
        fourButton->setFont(font);

        gridLayout->addWidget(fourButton, 3, 0, 1, 1);

        substractButton = new QPushButton(layoutWidget);
        substractButton->setObjectName("substractButton");
        substractButton->setMinimumSize(QSize(40, 40));
        substractButton->setMaximumSize(QSize(40, 40));
        substractButton->setFont(font);

        gridLayout->addWidget(substractButton, 0, 2, 1, 1);

        nineButton = new QPushButton(layoutWidget);
        nineButton->setObjectName("nineButton");
        nineButton->setMinimumSize(QSize(40, 40));
        nineButton->setMaximumSize(QSize(40, 40));
        nineButton->setFont(font);

        gridLayout->addWidget(nineButton, 2, 2, 1, 1);

        leftButton = new QPushButton(layoutWidget);
        leftButton->setObjectName("leftButton");
        leftButton->setMinimumSize(QSize(40, 40));
        leftButton->setMaximumSize(QSize(40, 40));
        leftButton->setFont(font);

        gridLayout->addWidget(leftButton, 6, 0, 1, 1);

        eightButton = new QPushButton(layoutWidget);
        eightButton->setObjectName("eightButton");
        eightButton->setMinimumSize(QSize(40, 40));
        eightButton->setMaximumSize(QSize(40, 40));
        eightButton->setFont(font);

        gridLayout->addWidget(eightButton, 2, 1, 1, 1);

        zeroButton = new QPushButton(layoutWidget);
        zeroButton->setObjectName("zeroButton");
        zeroButton->setMinimumSize(QSize(40, 40));
        zeroButton->setMaximumSize(QSize(40, 40));
        zeroButton->setFont(font);

        gridLayout->addWidget(zeroButton, 6, 1, 1, 1);

        twoButton = new QPushButton(layoutWidget);
        twoButton->setObjectName("twoButton");
        twoButton->setMinimumSize(QSize(40, 40));
        twoButton->setMaximumSize(QSize(40, 40));
        twoButton->setFont(font);

        gridLayout->addWidget(twoButton, 5, 1, 1, 1);

        clearButton = new QPushButton(layoutWidget);
        clearButton->setObjectName("clearButton");
        clearButton->setMinimumSize(QSize(40, 40));
        clearButton->setMaximumSize(QSize(40, 40));
        clearButton->setFont(font);

        gridLayout->addWidget(clearButton, 0, 0, 1, 1);

        threeButton = new QPushButton(layoutWidget);
        threeButton->setObjectName("threeButton");
        threeButton->setMinimumSize(QSize(40, 40));
        threeButton->setMaximumSize(QSize(40, 40));
        threeButton->setFont(font);

        gridLayout->addWidget(threeButton, 5, 2, 1, 1);

        pointButton = new QPushButton(layoutWidget);
        pointButton->setObjectName("pointButton");
        pointButton->setMinimumSize(QSize(40, 40));
        pointButton->setMaximumSize(QSize(40, 40));
        pointButton->setFont(font);

        gridLayout->addWidget(pointButton, 5, 4, 1, 1);

        oneButton = new QPushButton(layoutWidget);
        oneButton->setObjectName("oneButton");
        oneButton->setMinimumSize(QSize(40, 40));
        oneButton->setMaximumSize(QSize(40, 40));
        oneButton->setFont(font);

        gridLayout->addWidget(oneButton, 5, 0, 1, 1);

        sevenButton = new QPushButton(layoutWidget);
        sevenButton->setObjectName("sevenButton");
        sevenButton->setMinimumSize(QSize(40, 40));
        sevenButton->setMaximumSize(QSize(40, 40));
        sevenButton->setFont(font);

        gridLayout->addWidget(sevenButton, 2, 0, 1, 1);

        equalButton = new QPushButton(layoutWidget);
        equalButton->setObjectName("equalButton");
        equalButton->setMinimumSize(QSize(40, 40));
        equalButton->setMaximumSize(QSize(40, 40));
        equalButton->setFont(font);

        gridLayout->addWidget(equalButton, 6, 4, 1, 1);

        multiplyButton = new QPushButton(layoutWidget);
        multiplyButton->setObjectName("multiplyButton");
        multiplyButton->setMinimumSize(QSize(40, 40));
        multiplyButton->setMaximumSize(QSize(40, 40));
        multiplyButton->setFont(font);

        gridLayout->addWidget(multiplyButton, 2, 4, 1, 1);

        factorialButton = new QPushButton(layoutWidget);
        factorialButton->setObjectName("factorialButton");
        factorialButton->setMinimumSize(QSize(40, 40));
        factorialButton->setMaximumSize(QSize(40, 40));
        factorialButton->setFont(font);

        gridLayout->addWidget(factorialButton, 1, 4, 1, 1);

        fiveButton = new QPushButton(layoutWidget);
        fiveButton->setObjectName("fiveButton");
        fiveButton->setMinimumSize(QSize(40, 40));
        fiveButton->setMaximumSize(QSize(40, 40));
        fiveButton->setFont(font);

        gridLayout->addWidget(fiveButton, 3, 1, 1, 1);

        rightButton = new QPushButton(layoutWidget);
        rightButton->setObjectName("rightButton");
        rightButton->setMinimumSize(QSize(40, 40));
        rightButton->setMaximumSize(QSize(40, 40));
        rightButton->setFont(font);

        gridLayout->addWidget(rightButton, 6, 2, 1, 1);

        divideButton = new QPushButton(layoutWidget);
        divideButton->setObjectName("divideButton");
        divideButton->setMinimumSize(QSize(40, 40));
        divideButton->setMaximumSize(QSize(40, 40));
        divideButton->setFont(font);

        gridLayout->addWidget(divideButton, 3, 4, 1, 1);

        squareButton = new QPushButton(layoutWidget);
        squareButton->setObjectName("squareButton");
        squareButton->setMinimumSize(QSize(40, 40));
        squareButton->setMaximumSize(QSize(40, 40));
        squareButton->setFont(font);

        gridLayout->addWidget(squareButton, 1, 0, 1, 1);

        addButton = new QPushButton(layoutWidget);
        addButton->setObjectName("addButton");
        addButton->setMinimumSize(QSize(40, 40));
        addButton->setMaximumSize(QSize(40, 40));
        addButton->setFont(font);

        gridLayout->addWidget(addButton, 0, 1, 1, 1);

        modButton = new QPushButton(layoutWidget);
        modButton->setObjectName("modButton");
        modButton->setMinimumSize(QSize(40, 40));
        modButton->setMaximumSize(QSize(40, 40));
        modButton->setFont(font);

        gridLayout->addWidget(modButton, 1, 1, 1, 1);

        sqrtButton = new QPushButton(layoutWidget);
        sqrtButton->setObjectName("sqrtButton");
        sqrtButton->setMinimumSize(QSize(40, 40));
        sqrtButton->setMaximumSize(QSize(40, 40));
        sqrtButton->setFont(font);

        gridLayout->addWidget(sqrtButton, 1, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 10, 51, 16));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(220, 30, 151, 291));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 149, 289));
        scrollAreaWidgetContents->setMinimumSize(QSize(149, 289));
        scrollAreaWidgetContents->setMaximumSize(QSize(149, 289));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 0, 149, 289));
        textBrowser->setMaximumSize(QSize(149, 289));
        scrollArea->setWidget(scrollAreaWidgetContents);
        binaryButton = new QPushButton(centralwidget);
        binaryButton->setObjectName("binaryButton");
        binaryButton->setGeometry(QRect(160, 50, 56, 18));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        sixButton->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        deleteButton->setText(QString());
        fourButton->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        substractButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        nineButton->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        leftButton->setText(QCoreApplication::translate("MainWindow", "\357\274\210", nullptr));
        eightButton->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        zeroButton->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        twoButton->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        threeButton->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pointButton->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        oneButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        sevenButton->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        equalButton->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        multiplyButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        factorialButton->setText(QCoreApplication::translate("MainWindow", "!", nullptr));
        fiveButton->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        rightButton->setText(QCoreApplication::translate("MainWindow", "\357\274\211", nullptr));
        divideButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        squareButton->setText(QCoreApplication::translate("MainWindow", "X\302\262", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        modButton->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        sqrtButton->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\216\206\345\217\262\350\256\260\345\275\225", nullptr));
        binaryButton->setText(QCoreApplication::translate("MainWindow", "\350\275\254\344\272\214\350\277\233\345\210\266", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
