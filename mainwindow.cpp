#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    for(const QCameraInfo &infor : QCameraInfo::availableCameras()){
        qDebug() << infor.description();
    }
    M_Camera.reset(new QCamera(QCameraInfo::defaultCamera()));
    M_Camera->setViewfinder(ui->widget_Camera_View);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start_Camera()
{
    M_Camera->start();
}

void MainWindow::stop_Camera()
{
    M_Camera->stop();
}


void MainWindow::on_pushButton_Start_Camera_clicked()
{
    start_Camera();
}


void MainWindow::on_pushButton_Stop_Camera_clicked()
{
    stop_Camera();
}

