#ifndef TWIRM_CORE_TWIRM_HPP_
#define TWIRM_CORE_TWIRM_HPP_

// Global Include Files (should only be STL or CSTDLIB flies)
// c
#include <cstdlib>

// cxx
#include <iostream>
using std::cout;
using std::cerr;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <algorithm>
using std::min;
using std::max;
using std::swap;
using std::sort;
#include <memory>
using std::unique_ptr;

// 3rd party
#include "catch.hpp"

// Linux
extern "C" {
#include <stdint.h>
}

// Global Forward Declarations
namespace twirm {
  struct Options {
    Options() { quiet = false;
      nCores = 0;}
    bool quiet;
    int nCores;
  };

  extern Options TwirmOptions;
}

// Global Constants
#define TWIRM_VERSION "1.0"

#endif
