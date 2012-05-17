#include "renderarea.h"
#include <QtGui>

RenderArea::RenderArea(QWidget *parent) : QWidget(parent) {
}

void RenderArea::paintEvent(QPaintEvent *) {
    QPainter *painter = new QPainter(this);

//    draw(painter);
    painter->drawRect(12, 22, 100, 220);

    delete painter;
}
