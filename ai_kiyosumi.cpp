#include "ai_kiyosumi.h"
#include "util.h"



namespace saki
{



Action AiNodoka::think(const TableView &view, Limits &limits)
{
    (void) limits;
    return Ai::think(view, limits);
}



} // namespace saki

