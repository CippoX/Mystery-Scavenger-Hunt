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
#include "graph_walk.hpp"

using std::vector;
using std::pair;

bool sortbysec(const pair<vector<int>, int> &a, const pair<vector<int>, int> &b) {
    return (a.second < b.second);
}

int main(int argc, const char * argv[]) {
  
  // Adjacency matrix reppresentig the graph, note
  // that the graph must be completly connected
  vector<vector<int>> graph =
  {
    {0,1,5,3,0},
    {2,0,4,5,3},
    {4,2,0,7,9},
    {2,3,8,0,9},
    {1,4,2,6,0},
  };

  vector<vector<int>> res = printPermutations(int(graph.size()));
  vector<pair<vector<int>, int>> res2 = calculateAllGraphPath(graph, res);
  
  for(pair<vector<int>, int> p : res2){
    for(int i : p.first)
      std::cout<<i;
    std::cout<<" | "<<p.second<<std::endl;
  }
  
  std::cout<<"-------------"<<std::endl;
  
  sort(res2.begin(), res2.end(), sortbysec);
  
  for(pair<vector<int>, int> p : res2){
    for(int i : p.first)
      std::cout<<i;
    std::cout<<" | "<<p.second<<std::endl;
  }
  
  return 0;
}
