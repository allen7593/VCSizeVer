#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    height=100;
    width=200;

    secret=new QImage(width,height,QImage::Format_RGBA8888);
    s1=new QImage(width*2,height*2,QImage::Format_RGBA8888);
    s2=new QImage(width*2,height*2,QImage::Format_RGBA8888);
}

Dialog::~Dialog()
{

}
