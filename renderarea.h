#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = 0);
    
protected:
    void paintEvent(QPaintEvent *);

//    virtual void draw(QPainter *) = 0;

signals:
    
public slots:
    
};

#endif // RENDERAREA_H
