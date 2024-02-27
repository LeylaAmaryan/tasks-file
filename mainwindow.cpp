#include "mainwindow.h"
#include "./ui_mainwindow.h"
double firstNum;
bool userIsTypingSecondNumber = false;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    connect(ui-> toolButton_0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui-> toolButton_1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui-> toolButton_2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui-> toolButton_3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui-> toolButton_4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui-> toolButton_5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui-> toolButton_6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui-> toolButton_7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui-> toolButton_8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui-> toolButton_9,SIGNAL(released()),this,SLOT(digit_pressed()));

    connect(ui-> toolButton_plusMinus,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui-> toolButton_percent,SIGNAL(released()),this,SLOT(unary_operation_pressed()));

    connect(ui-> toolButton_add,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui-> toolButton_subtruct,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui-> toolButton_multyply,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
     connect(ui-> toolButton_divide,SIGNAL(released()),this,SLOT(binary_operation_pressed()));

    ui->toolButton_add->setCheckable(true);
     ui->toolButton_subtruct->setCheckable(true);
    ui->toolButton_multyply->setCheckable(true);
     ui->toolButton_divide->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::digit_pressed()
{

    QToolButton * button = (QToolButton*)sender();
    double labelNumber;
    QString newLabel;
    if((ui->toolButton_add->isChecked() || ui->toolButton_subtruct->isChecked()||ui->toolButton_multyply->isChecked()||
         ui->toolButton_divide->isChecked()) && (! userIsTypingSecondNumber))
    {
        labelNumber = button->text().toDouble();
        userIsTypingSecondNumber = true;
        newLabel = QString::number(labelNumber,'g',15);
    }
    else{
        if(ui->label->text().contains('.') && button->text() == "0")
        {
          newLabel = ui->label->text() + button ->text();
        }
        else{
            labelNumber = (ui->label->text() + button ->text()).toDouble();
            newLabel = QString::number(labelNumber,'g',15);
            }
        }


    ui->label->setText(newLabel);

}
void MainWindow::on_toolButton_decmal_released()
{
    ui->label->setText(ui->label->text() +".");
}
void MainWindow::unary_operation_pressed(){
    QToolButton *button = (QToolButton*) sender();
    double labelNumber;
    QString newLabel;
    if(button->text() =="+/-")
    {
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * -1;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
    }
    if(button->text() == "%")
    {
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * 0.01;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
    }
}

void MainWindow::on_toolButton_clear_released()
{
    ui->toolButton_add->setChecked(false);
    ui->toolButton_subtruct->setChecked(false);
    ui->toolButton_multyply->setChecked(false);
    ui->toolButton_divide->setChecked(false);
    userIsTypingSecondNumber = false;
    ui->label->setText("0");
}
void MainWindow::on_toolButton_equals_released()
{
    double labelNumber, secondNum;
    QString newLabel;
    secondNum =ui->label->text().toDouble();

    if(ui->toolButton_add->isChecked())
    {

    labelNumber = firstNum + secondNum;
        newLabel = QString::number(labelNumber,'g',15);
    ui->label->setText(newLabel);
        ui->toolButton_add->setChecked(false);

    }
    else if(ui->toolButton_subtruct->isChecked())
    {
        labelNumber = firstNum - secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->toolButton_subtruct->setChecked(false);
    }
    else if(ui->toolButton_multyply->isChecked())
    {
        labelNumber = firstNum * secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->toolButton_multyply->setChecked(false);
    }
    else if(ui->toolButton_divide->isChecked())
    {
        labelNumber = firstNum / secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->toolButton_divide->setChecked(false);
    }
    userIsTypingSecondNumber = false;
}
void MainWindow::binary_operation_pressed()
{
    QToolButton * button = (QToolButton*) sender();
    firstNum = ui->label->text().toDouble();
           button->setChecked(true);
}
