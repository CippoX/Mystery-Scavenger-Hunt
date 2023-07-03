//
//  graph_walk.cpp
//  mystery-scavenger-hunt
//
//  Created by Tommaso Palmisano on 03/07/23.
//

#include "graph_walk.hpp"

vector<pair<vector<int>, int>> calculateAllGraphPath(const vector<vector<int>> &graph,
                                                     const vector<vector<int>> &permutations){
  vector<pair<vector<int>, int>> res;
  
  for(vector v : permutations){
    int sum(0);
    for(int i = 0; i < v.size() - 1; i++)
      sum += graph[v[i]][v[i + 1]];
    
    pair<vector<int>, int> aux(v, sum);
    res.push_back(aux);
  }
  
  return res;
}
