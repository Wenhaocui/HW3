#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Test1, HandlesTest1) {
  Solution solution;
  std::vector<int> v ={3, 7, 11, 15};
  int sum = 10;
  std::vector<int> r = solution.Sum(v, sum);
  std::vector<int> test1 ={7, 3};
  EXPECT_EQ(r, test1);
}

TEST(Test2, HandlesTest2) {
  Solution solution;
  std::vector<int> v ={3, 7, 11, 15};
  int sum = 180;
  std::vector<int> r = solution.Sum(v, sum);
  std::vector<int> test2 ={ };
  EXPECT_EQ(r, test2);
}

TEST(Test3, HandlesTest3) {
  Solution solution;
  std::vector<int> v ={1, 4, 3, 2};
  int sum = 5;
  std::vector<int> r = solution.Sum(v, sum);
  std::vector<int> test3 ={4, 1};
  EXPECT_EQ(r, test3);
}