#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <Elevator.h>
#include <Floor.h>
#include <ECS.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
//    void updateFloors();
    void populate_clicked();
    Elevator* elevator;
    Floor* currentFloor;
    ECS* ecs;
    void overloadpressed();
    void helppressed();
    void powerpressed();
    void firepressed();
    void dpressed();
    void uppressed();
    void downpressed();
};
#endif // MAINWINDOW_H
