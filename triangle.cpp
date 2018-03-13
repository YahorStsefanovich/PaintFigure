#include "triangle.h"
#include <QPainter>

Triangle::Triangle(QPointF point, QObject *parent) :
    Figure(point,parent)
{
    Q_UNUSED(point)
}

Triangle::~Triangle()
{

}

void Triangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(QBrush(getColor()));
    //painter->setPen(QPen(Qt::blue, 2));

    QPolygonF polygon;

    polygon << QPointF(startPoint().x() + (endPoint().x() > startPoint().x() ? 1 : -1)*
                       abs(endPoint().x() - startPoint().x()), startPoint().y())
            << QPointF(endPoint().x(), startPoint().y() + (endPoint().y() > startPoint().y() ? + 1 : - 1)*
                       abs(endPoint().y() - startPoint().y()))
            << QPointF(startPoint().x() + (endPoint().x() > startPoint().x() ? + 1 : - 1)*
                       abs(endPoint().x() - startPoint().x()), endPoint().y())
            << QPointF(startPoint().x(), startPoint().y() + (endPoint().y() > startPoint().y() ? + 1 : - 1)*
                       abs(endPoint().y() - startPoint().y()));

    painter->drawPolygon(polygon);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}
