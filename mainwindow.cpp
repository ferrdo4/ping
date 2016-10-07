#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLabel"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(clicked(bool)));
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setRowCount(5);
    QLabel *lab = new QLabel();
    lab->setText("aaa");
    ui->tableWidget->setCellWidget(0,0, lab);

    ui->comboBox->addItem("1");
    ui->comboBox->addItem("2");
    ui->comboBox->addItem("3");
    ui->comboBox->addItem("*");
    ui->comboBox->setCurrentIndex(3);

    ui->tableWidget->setCellWidget(0,1, ui->comboBox);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clicked(bool)
{
    ui->pushButton_2->setVisible(!ui->pushButton_2->isVisible());
}
