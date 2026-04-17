#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QToolBar>
#include <QAction>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QToolBar *toolbar = addToolBar("Main Toolbar");

    QAction *createAction = new QAction("Create Competition", this);
    QAction *openAction = new QAction("Open Competition", this);

    toolbar->addAction(createAction);
    toolbar->addAction(openAction);

    connect(createAction, &QAction::triggered, this, [](){
        qDebug() << "Create clicked";
    });

    connect(openAction, &QAction::triggered, this, [](){
        qDebug() << "Open clicked";
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
