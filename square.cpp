#include "square.h"
#include <QPainter>


Square::Square(QPointF point, QObject *parent) :
    Figure(point,parent)
{
    Q_UNUSED(point)
}

Square::~Square()
{

}

void Square::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(QBrush(getColor()));
//    painter->setPen(QPen(Qt::red, 2));

    QPolygonF polygon;

    polygon << QPointF(startPoint().x(), startPoint().y())
                << QPointF(startPoint().x(),
                    (endPoint().x() > startPoint().x()? 1 : -1)*
                    abs(endPoint().x()-startPoint().x()) + startPoint().y())
                << QPointF(endPoint().x(),
                           (endPoint().x() > startPoint().x()? 1 : -1)*
                           abs(endPoint().x()-startPoint().x()) + startPoint().y())
                << QPointF(endPoint().x(),startPoint().y());

    painter->drawPolygon(polygon);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}
