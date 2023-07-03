//
//  graph_walk.hpp
//  mystery-scavenger-hunt
//
//  Created by Tommaso Palmisano on 03/07/23.
//

#ifndef graph_walk_hpp
#define graph_walk_hpp

#include <stdio.h>
#include <vector>

using std::vector;
using std::pair;

vector<pair<vector<int>, int>> calculateAllGraphPath(const vector<vector<int>> &graph,
                                                     const vector<vector<int>> &permutations);

#endif /* graph_walk_hpp */
