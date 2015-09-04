#ifndef TWIRM_ROBORALLY_BOARD_HPP_
#define TWIRM_ROBORALLY_BOARD_HPP_
#include "twirm.hpp"

namespace twirm {
  class Board {
    public:
      Board(std::vector<std::vector<ITile>> boardTiles);
      ~Board();
      Board readFromFile(const std::string &filePath);
      friend std::ostream& operator<<(std::ostream &os, const Board& b);
    private:
      int w, h;
      ITile boardTiles[]; //unique_ptr is too slow for such a high-contention data structure
  }
}

#endif
