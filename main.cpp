#include "vecfuncs.h"

int main() {
  int min, max;
  vector<int> userNums;

  fillVector(userNums);
  cout << "size: " << userNums.size() << endl;

  // task1: define and call a fucniton to find and return the min and max number
  findExtremes(userNums, min, max);
  // task2: convert to three file format
  cout << "min: " << min << " max: " << max << endl;
}