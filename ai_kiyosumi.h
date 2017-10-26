#ifndef SAKI_AI_MIYAMORI_H
#define SAKI_AI_MIYAMORI_H

#include "ai.h"



namespace saki
{



class AiNodoka : public Ai
{
public:
    AI_CTORS(AiNodoka)
    Action think(const TableView &view, Limits &limits) override;
};



} // namespace saki



#endif // SAKI_AI_MIYAMORI_H
