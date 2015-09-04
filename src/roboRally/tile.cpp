#include "tile.hpp"

namespace twirm {
  gameState Tile::executeEdges(const gameState &game) {
    gameState current = game;
    for (IEdge e : edges) {
      current = e.execute(current)
    }
    return current;
  }
}
