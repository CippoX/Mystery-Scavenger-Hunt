//
//  main.cpp
//  mystery-scavenger-hunt
//
//  Created by Tommaso Palmisano on 01/07/23.
//

/*
 for(vector<int> v : res){
   for(int i : v)
     std::cout<<i;
   std::cout<<std::endl;
 }
 */

#include <iostream>
#include "permutation.hpp"

using std::vector;

int main(int argc, const char * argv[]) {
  
  // Adjacency matrix reppresentig the graph, note
  // that the graph must be completly connected
  vector<vector<int>> graph =
  {
    {0,1,2,3,4},
    {2,3,4,5,6},
    {4,5,6,7,8},
    {2,3,4,5,6},
    {3,4,5,6,7},
  };

  vector<vector<int>> res = printPermutations(graph.size());
  
  for(vector<int> v : res){
    for(int i : v)
      std::cout<<i;
    std::cout<<std::endl;
  }
  
  std::cout << "Hello, World!\n";
  return 0;
}
