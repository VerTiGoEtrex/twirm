#ifndef TWIRM_CORE_PARALLEL_HPP_
#define TWIRM_CORE_PARALLEL_HPP_

#include "twirm.hpp"
extern "C" {
#include <unistd.h>
}

namespace twirm {
  int NumSystemCores();
}
#endif
