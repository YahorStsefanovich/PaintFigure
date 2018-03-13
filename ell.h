#ifndef ELL_H
#define ELL_H


#include <QObject>
#include <QGraphicsItem>
#include "figure.h"

class Ell : public Figure
{
     Q_OBJECT
public:
    explicit Ell(QPointF point, QObject *parent = 0);
        ~Ell();

private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // ELL_H
