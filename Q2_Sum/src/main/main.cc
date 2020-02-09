#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  std::vector<int> v ={3, 7, 11, 15};
  int sum = 10;
  std::vector<int> r = solution.Sum(v, sum);
  std::cout << "[ ";
  for (int i = 0; i <r.size(); i++)
	{
		std::cout << r[i] << " ";
	}
  std::cout << "]" << std::endl;

  std::vector<int> r1 = solution.Sum(v, 180);
  std::cout << "[ ";
  for (int i = 0; i <r1.size(); i++)
	{
		std::cout << r1[i] << " ";
	}
  std::cout << "]" << std::endl;

  std::vector<int> v1 ={1, 4, 3, 2};  
  std::vector<int> r2 = solution.Sum(v1, 5);
  std::cout << "[ ";
  for (int i = 0; i <r2.size(); i++)
	{
		std::cout << r2[i] << " ";
	}
  std::cout << "]" << std::endl;
}