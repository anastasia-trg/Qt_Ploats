#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "renderarea.h"

class MainWindow : public QWidget
{
    Q_OBJECT
public:
    MainWindow();
    ~MainWindow();
    
signals:
    
public slots:
    
private:
    RenderArea *_renderArea;
};

#endif // MAINWINDOW_H
