#include "vecfuncs.h"

void fillVector(vector<int> &vec) {
  int num;

  for(int i = 0; i < 5; i++) {
    cout << "Enter an int: " << endl;
    cin >> num;
    vec.push_back(num);
  }
}

void findExtremes(vector<int>& vec, int&min, int&max) {
  // assumes there is at least one value in vec
  min = max = vec[0];
  for(int i = 0; i < vec.size(); i++) {
    if(vec[i] < min) {
      // new min
      min = vec[i];
    }
    if(vec[i] > max) {
      // new max
      max = vec[i];
    }
  }
}