#ifndef GIRLS_KIYOSUMI_H
#define GIRLS_KIYOSUMI_H

#include "girl.h"



namespace saki
{



class Yuuki : public Girl
{
public:
    GIRL_CTORS(Yuuki)
    bool checkInit(Who who, const Hand &init, const Princess &princess, int iter) override;
    void onDraw(const Table &table, Mount &mount, Who who, bool rinshan) override;
    void onChooseFirstDealer(Who tempDealer, int &die1, int &die2) override;
};

class Nodoka : public Girl
{
public:
    GIRL_CTORS(Nodoka)
    void onDraw(const Table &table, Mount &mount, Who who, bool rinshan) override;
};



}



#endif // GIRLS_KIYOSUMI_H


