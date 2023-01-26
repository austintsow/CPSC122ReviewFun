// header fild guard code prevents the problem
// of double inclusion of a header file
// see gina's video in 121 playlist for more info

#ifndef VECFUNCS_H
#define VECFUNCS_H

#include <iostream>
#include <vector>

using namespace std;

void fillVector(vector<int>&);
void findExtremes(vector<int>&, int&, int&);