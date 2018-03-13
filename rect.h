#ifndef RECT_H
#define RECT_H

#include <QObject>
#include <QGraphicsItem>
#include "figure.h"

class Rect : public Figure
{
     Q_OBJECT
public:
    explicit Rect(QPointF point, QObject *parent = 0);
        ~Rect();

private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // RECT_H
