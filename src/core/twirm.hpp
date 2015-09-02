#ifndef TWIRM_CORE_TWIRM_HPP_
#define TWIRM_CORE_TWIRM_HPP_

// Global Include Files (should only be STL or CSTDLIB flies)
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

// Global Forward Declarations
struct Options {
  Options() { quiet = false;}
  bool quiet;
};

// Global Constants
#define TWIRM_VERISON "1.0"



#endif
