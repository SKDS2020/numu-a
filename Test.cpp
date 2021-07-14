#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "NumberWithUnits.hpp"
using namespace ariel;

ifstream units_file{"units.txt"};

TEST_CASE("basic read && build"){
  NumberWithUnits::read_units(units_file);
  NumberWithUnits a{2, "km"};   // 2 kilometers


}
