#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked(bool)), this, SLOT(clicked(bool)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clicked(bool)
{
    ui->pushButton_2->setVisible(!ui->pushButton_2->isVisible());
}
