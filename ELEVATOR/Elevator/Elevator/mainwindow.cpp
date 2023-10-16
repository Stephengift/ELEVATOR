#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    currentFloor = new Floor(1);
    elevator = new Elevator(1,currentFloor);

    ecs = new ECS();
    ecs->addElevator(elevator);
    ecs->addFloor(currentFloor);


 
    // Connect the Populate button to the updateFloors() slot
    //connect(ui->Populate, &QPushButton::pressed, this, &MainWindow::updateFloors);
    connect(ui->Overload, &QPushButton::pressed, this, &MainWindow::overloadpressed);
    connect(ui->Help, &QPushButton::pressed, this, &MainWindow::helppressed);
    connect(ui->PowerButton, &QPushButton::pressed, this, &MainWindow::powerpressed);
    connect(ui->FireButton, &QPushButton::pressed, this, &MainWindow::firepressed);
    connect(ui->DButton_2, &QPushButton::pressed, this, &MainWindow::dpressed);
    connect(ui->UPButton, &QPushButton::pressed, this, &MainWindow::uppressed);
    connect(ui->DButton, &QPushButton::pressed, this, &MainWindow::downpressed);
    //connect(ui->DButton_2, &QPushButton::pressed, this, &MainWindow::dpressed);
    //connect(ui->PowerButton, &QPushButton::pressed, this, &MainWindow::firepressed);

}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow :: overloadpressed(){
    elevator->setState(overload);
    elevator->Overload();
}


void MainWindow :: helppressed(){
    elevator->setState(help);
    elevator->helpbutton();
}

void MainWindow :: powerpressed(){
    elevator->setState(powerout);
    elevator->powerOut(currentFloor);
}

void MainWindow :: firepressed(){
    elevator->setState(fire);
    elevator->fireAlarm(currentFloor);
}

void MainWindow :: dpressed(){
    elevator->setState(normal);
    elevator->Obstacle(true);
}

void MainWindow :: uppressed(){
    elevator->setState(normal);
    ecs->moveElevator(1, currentFloor,5);
    currentFloor = new Floor(5);
}

void MainWindow :: downpressed(){
    elevator->setState(normal);
    ecs->moveElevator(1, currentFloor,1);
}





