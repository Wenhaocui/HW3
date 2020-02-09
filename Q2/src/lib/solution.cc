#include "solution.h"
#include <iostream>
#include <unordered_map>


std::vector<int> Solution::Sum(std::vector<int> &v, int sum){
  std::unordered_map<int,int> map;
  std::vector<int> result;
  for(int i = 0; i < v.size(); i++){
    int find = sum - v[i];
    if(map.find(find) != map.end()){
      result.push_back(v[i]);
      result.push_back(find);
      return result;
    }
    map[v[i]] = i;
  }
  std::vector<int> empty;
  return empty;
}