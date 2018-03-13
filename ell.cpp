#include "ell.h"

#include <QPainter>

Ell::Ell(QPointF point, QObject *parent) :
    Figure(point,parent)
{
    Q_UNUSED(point)
}

Ell::~Ell()
{

}

void Ell::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(QBrush(getColor()));
    //painter->setPen(QPen(getColor(), 2));

    QRectF rect(endPoint().x() > startPoint().x() ? startPoint().x() : endPoint().x(),
               endPoint().y() > startPoint().y() ? startPoint().y() : endPoint().y(),
               qAbs(endPoint().x() - startPoint().x()),
               qAbs(endPoint().y() - startPoint().y()));

    painter->drawEllipse(rect);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}
