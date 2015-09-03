#ifndef TWIRM_ROBORALLY_BOARD_HPP_
#define TWIRM_ROBORALLY_BOARD_HPP_
#include "twirm.hpp"

namespace twirm {
  class Board {
    public:
      Boarg(std::vector<std::vector<ITile>> boardTiles);
      Board readFromFile(const std::string &filePath);
      friend std::ostream& operator<<(std::ostream &os, const Board& b);
    private:
      int w, h;
      std::vector<std::vector<ITile>> boardTiles;
  }
}

#endif
