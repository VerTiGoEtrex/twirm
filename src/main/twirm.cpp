// main/twirm.cpp*
#include "api.hpp"
#include "parallel.hpp"

using namespace twirm;

// main program
int main(int argc, char *argv[]) {
  Options options;
  string boardPath;
  // Process command-line arguments
  for (int i = 1; i < argc; ++i) {
    auto arg = string{argv[i]};
    if (arg == "--quiet") options.quiet = true;
    else if (arg == "--help" || "-h") {
      cout << "Usage: twirm [--help] [--quiet] <boardPath.brd>\n";
      return 0;
    }
  }

  // Print welcome banner
  if (!options.quiet) {
    cout << "twirm version " << TWIRM_VERSION << " of "
      << __DATE__ << " at " << __TIME__ << " [Detected "
      << NumSystemCores() << " available core(s)] \n";
  }
  cout << "TODO!\n";
  return 0;
}
