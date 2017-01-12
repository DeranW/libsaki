#ifndef TABLEOPERATOR_H
#define TABLEOPERATOR_H

#include "who.h"



namespace saki
{



class Table;

class TableOperator
{
public:
    explicit TableOperator(Who self) : mSelf(self) { }
    explicit TableOperator(const TableOperator &copy) = default;
    TableOperator &operator=(const TableOperator &assign) = default;
    virtual ~TableOperator() = default;

    virtual void onActivated(Table &table) = 0;

protected:
    const Who mSelf;
};



}



#endif // TABLEOPERATOR_H
