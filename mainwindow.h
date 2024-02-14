#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia>
#include <QtMultimediaWidgets>
#include <QtWidgets>
#include <QtCore>
#include <QtGui>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pushButton_Start_Camera_clicked();

    void on_pushButton_Stop_Camera_clicked();

private:
    void start_Camera();
    void stop_Camera();


private:
    Ui::MainWindow *ui;
    QScopedPointer<QCamera> M_Camera;

};
#endif // MAINWINDOW_H
