#include "board.hpp"

namespace twirm {
  Board::Board(vector<vector<ITile>> boardTiles) {
    assert(!boardTiles.empty() && !boardTiles[0].empty());
    w = boardTiles.size();
    h = boardTiles[0].size();
  }

  Board Board::readFromFile(const string &filePath) {
    return Board(tiles)
  }
      friend std::ostream& operator<<(std::ostream &os, const Board& b);
}

