#include "solution.h"
#include <iostream>



std::string Grade::print()
{
  
  return "Math: " + std::to_string(Math_) + " Computers: " + std::to_string(Computers_) + " Physics " + std::to_string(Physics_);
} 