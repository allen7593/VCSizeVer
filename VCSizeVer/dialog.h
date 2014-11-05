#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QImage>
class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    int height;
    int width;

    QImage* secret;
    QImage* s1;
    QImage* s2;

    void generateS1();
    void generateSecret();
    void generateS2();
    void saveAll();

    void topHor(QImage*,int,int);
    void botHor(QImage*,int,int);
    void lefVer(QImage*,int,int);
    void rigVer(QImage*,int,int);
    void lefRig(QImage*,int,int);
    void rigLef(QImage*,int,int);
};

#endif // DIALOG_H
