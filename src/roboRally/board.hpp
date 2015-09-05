#ifndef TWIRM_ROBORALLY_BOARD_HPP_
#define TWIRM_ROBORALLY_BOARD_HPP_
#include "twirm.hpp"

namespace twirm {
  class Board {
    public:
      // Constructors
      Board(std::vector<std::vector<ITile>> boardTiles);
      ~Board();
      static Board readFromFile(const std::string &filePath);

      // Public methods
      friend std::ostream& operator<<(std::ostream &os, const Board& b);

    private:
      int w, h;
      std::vector<ITile> boardTiles;
      std::vector<IEdge*> laserEdges;
  }
}

#endif
