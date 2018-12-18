#ifndef CHANGEDSTATE_H
#define CHANGEDSTATE_H

#include <QObject>
#include <QTimer>
#include <QDebug>


class ChangedState: public QObject
{

    Q_OBJECT

   // Q_PROPERTY(int ikeresp READ ikeresp WRITE setScreen NOTIFY changeScren)

public:
    ChangedState(QObject *parent = nullptr);

    ~ChangedState();

    Q_INVOKABLE void goTela(void);

    int ikeresp() const;


signals:
     void changeScren(void);

    public slots:

     void setScreen(void);
private:

    int resp;

    ChangedState *t2;

};

#endif // CHANGEDSTATE_H
