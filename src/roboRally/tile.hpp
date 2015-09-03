#ifndef TWIRM_ROBORALLY_TILE_HPP_
#define TWIRM_ROBORALLY_TILE_HPP_
#include "twirm.hpp"

namespace twirm {
  class Tile {
    public:
      virtual gameState execute(const gameState &game) = 0;
      gameState executeEdges(const gameState &game);
    private:
      IEdge edges[4];
  }
}

#endif
