#ifndef WIN_H
#define WIN_H
#include <QtGui>
#include "area.h"
class Win : public QWidget
{
protected:
    //QTextCodec *codec;
    Area * area; // область отображения рисунка
    QPushButton * btn;
public:
    Win();
};
#endif
