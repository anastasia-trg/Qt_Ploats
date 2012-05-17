#include "mainwindow.h"
#include <QtGui>

MainWindow::MainWindow() {
    _renderArea = new RenderArea();

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(_renderArea);
    setLayout(layout);
}

MainWindow::~MainWindow() {
    delete _renderArea;
}

