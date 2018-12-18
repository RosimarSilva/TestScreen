#include "changedstate.h"

ChangedState::ChangedState(QObject *parent) : QObject(parent)
{
    t2 = new ChangedState();


    connect(t2,&ChangedState::setScreen,this,&ChangedState::changeScren);
}

ChangedState::~ChangedState()
{
    delete t2;
}

void ChangedState::goTela()
{
     this->setScreen();
}

int ChangedState::ikeresp() const
{
    return resp;
}

void ChangedState::setScreen(void)
{
    emit changeScren();
}
