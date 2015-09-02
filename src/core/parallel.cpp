#include "parallel.hpp"

namespace twirm {
  int NumSystemCores() {
    if (TwirmOptions.nCores > 0) return TwirmOptions.nCores;
    return sysconf(_SC_NPROCESSORS_ONLN);
  }
}
