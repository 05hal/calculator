#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include"evaluate.h"
#include <bitset>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QIcon con("C:\\qtcode\\caculator\\delete.png");
    ui->deleteButton->setIcon(con);
    ui->equalButton->setStyleSheet("background:yellow");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_oneButton_clicked()
{
    expression +=L"1";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_twoButton_clicked()
{
    expression +=L"2";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_threeButton_clicked()
{
    expression +=L"3";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_fourButton_clicked()
{
    expression +=L"4";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_fiveButton_clicked()
{
    expression +=L"5";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_sixButton_clicked()
{
    expression +=L"6";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_sevenButton_clicked()
{

    expression +=L"7";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_eightButton_clicked()
{
    expression +=L"8";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_nineButton_clicked()
{
    expression +=L"9";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_equalButton_clicked()
{
    double result;
    if(expression==L"")//复制表达式
        expression=ui->lineEdit->text().toStdWString();


    expression +=L"=";

    try{
        result=evaluate(expression);

        QString qexpression=QString::fromStdWString(expression);

        qexpression+=QString::number(result);

        qDebug()<<result;
        qDebug()<<std::to_wstring(result);


        ui->lineEdit->setText(qexpression);
        ui->textBrowser->append(qexpression);

    }catch(const std::runtime_error& e){
        ui->lineEdit->setText(e.what());
         qDebug()<<"/0 3";

    }catch(std::invalid_argument e2){
         ui->lineEdit->setText(e2.what());

    }






}


void MainWindow::on_leftButton_clicked()
{

    expression +=L"(";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_rightButton_clicked()
{
    expression +=L")";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}





void MainWindow::on_multiplyButton_clicked()
{
    expression +=L"*";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_deleteButton_clicked()
{

    if (!expression.empty()) {
        expression.pop_back(); // 宽字符删除最后一个字符
        ui->lineEdit->setText(QString::fromStdWString(expression)); // 转换为 QString
    }
}


void MainWindow::on_substractButton_clicked()
{

    expression +=L"-";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_addButton_clicked()
{

    expression +=L"+";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_zeroButton_clicked()
{
    expression +=L"0";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_clearButton_clicked()
{
    expression.clear();
    ui->lineEdit->clear();
}


void MainWindow::on_pointButton_clicked()
{
    expression +=L".";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}





void MainWindow::on_modButton_clicked()
{
    expression +=L"%";
    ui->lineEdit->setText(QString::fromStdWString(expression));

}







void MainWindow::on_sqrtButton_clicked()
{
    expression +=L"√";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_factorialButton_clicked()
{
    expression +=L"!";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_squareButton_clicked()
{
    expression+=L"²";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_divideButton_clicked()
{
    expression+=L"/";
    ui->lineEdit->setText(QString::fromStdWString(expression));
}


void MainWindow::on_binaryButton_clicked()

{

    double result;

    try{
        result=evaluate(expression);


    }catch(const std::runtime_error& e){
        ui->lineEdit->setText(e.what());
        qDebug()<<"/0 3";

    }catch(std::invalid_argument e2){
        ui->lineEdit->setText(e2.what());

    }


    std::bitset<8> binary(result);
    std::string binaryString = binary.to_string();
    QString qBinaryString = QString::fromStdString(binaryString);
    ui->lineEdit->setText(qBinaryString);
    ui->textBrowser->append(qBinaryString);



}

