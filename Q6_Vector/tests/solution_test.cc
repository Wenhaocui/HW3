#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Test1, HandlesTest1) {
  Solution solution;
  std::string s1 = "(a+b)";
  EXPECT_EQ(solution.Parentheses(s1), true);
}

TEST(Test2, HandlesTest2) {
  Solution solution;
  std::string s2 = "(a+b)[c*d]{5g+h}";
  EXPECT_EQ(solution.Parentheses(s2), true);
}

TEST(Test3, HandlesTest3) {
  Solution solution;
  std::string s3 = "(a+b]";
  EXPECT_EQ(solution.Parentheses(s3), false);
}

TEST(Test4, HandlesTest4) {
  Solution solution;
  std::string s4 = "(7h+[5c)+7]";
  EXPECT_EQ(solution.Parentheses(s4), false);
}

TEST(Test5, HandlesTest5) {
  Solution solution;
  std::string s5 = "{2k+[5j]}";
  EXPECT_EQ(solution.Parentheses(s5), true);
}

TEST(Test6, HandlesTest6) {
  Solution solution;
  std::string s6 = "{2k++[5--*j]}";
  EXPECT_EQ(solution.Parentheses(s6), true);
}