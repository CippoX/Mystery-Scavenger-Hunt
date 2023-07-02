//
//  permutation.cpp
//  mystery-scavenger-hunt
//
//  Created by Tommaso Palmisano on 01/07/23.
//

#include "permutation.hpp"
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Function to print all permutations of a given string
vector<vector<int>> printPermutations(int n) {
 
  vector<vector<int>> res;
  string str;
  
  for(int i = 1; i < n - 1; i++)
    str += to_string(i);
  
  // Sort the string in lexicographically increasing order
  sort(str.begin(), str.end());
  
  // Keep printing the next permutation until there is no next permutation
  do {
    vector<int> aux(1, 0);
    for (char s : str)
      aux.push_back(int(s) - 48);
    aux.push_back(n - 1);
    res.push_back(aux);
  } while (next_permutation(str.begin(), str.end()));
  
  return res;
}

