#ifndef TWIRM_ROBORALLY_TILE-FLOOR_HPP_
#define TWIRM_ROBORALLY_TILE-FLOOR_HPP_
#include "twirm.hpp"

namespace twirm {
  class Floor : public Tile {
    public:
      gameState execute(const gameState &game);
  }
}

#endif
