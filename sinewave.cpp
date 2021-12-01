#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <cmath>

int main() {
  // Sine wave, 1 at the start, 0 in the middle, 1 at the end.
  
  // Must be inbetween 0-1
  float Progress = 0.25;
  
  float Result = sin(Progress*M_PI+M_PI)+1;
  
  std::cout << Result << std::endl;
  
  return 0;
}
