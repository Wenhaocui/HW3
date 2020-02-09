#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(Test1, HandlesTest1) {
  Grade obj1(99,99,99);
  obj1++;
  Grade obj2(0,0,0);
  obj2++;
  EXPECT_EQ(obj1.GetMath(), 100);
  EXPECT_EQ(obj1.GetComputers(), 100);
  EXPECT_EQ(obj1.GetPhysics(), 100);
  EXPECT_EQ(obj2.GetMath(), 10);
  EXPECT_EQ(obj2.GetComputers(), 10);
  EXPECT_EQ(obj2.GetPhysics(), 10);
}

TEST(Test2, HandlesTest2) {
  Grade obj1(1,1,1);
  obj1--;
  Grade obj2(30,30,30);
  obj2--;
  EXPECT_EQ(obj1.GetMath(), 0);
  EXPECT_EQ(obj1.GetComputers(), 0);
  EXPECT_EQ(obj1.GetPhysics(), 0);
  EXPECT_EQ(obj2.GetMath(), 10);
  EXPECT_EQ(obj2.GetComputers(), 10);
  EXPECT_EQ(obj2.GetPhysics(), 10);
}

TEST(Test3, HandlesTest3) {
  Grade obj1(1,1,1);
  obj1+=50;
  Grade obj2(30,30,30);
  obj2-=10;
  EXPECT_EQ(obj1.GetMath(), 51);
  EXPECT_EQ(obj1.GetComputers(), 51);
  EXPECT_EQ(obj1.GetPhysics(), 51);
  EXPECT_EQ(obj2.GetMath(), 20);
  EXPECT_EQ(obj2.GetComputers(), 20);
  EXPECT_EQ(obj2.GetPhysics(), 20);
}

TEST(Test4, HandlesTest4) {
  Grade obj1(1,1,1);
  Grade obj2(30,30,30);
  Grade obj3(30,30,30);
  EXPECT_EQ((obj1==obj2), false);
  EXPECT_EQ((obj3==obj2), true);

}