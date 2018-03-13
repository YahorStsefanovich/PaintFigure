#include "rect.h"

#include <QPainter>

Rect::Rect(QPointF point, QObject *parent) :
    Figure(point,parent)
{
    Q_UNUSED(point)
}

Rect::~Rect()
{

}

void Rect::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(QBrush(getColor()));

    QPolygonF polygon;

    polygon << QPointF(startPoint().x(), startPoint().y())
                << QPointF(endPoint().x(), startPoint().y())
                << QPointF(endPoint().x(), endPoint().y())
                << QPointF(startPoint().x(), endPoint().y());

    painter->drawPolygon(polygon);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}
