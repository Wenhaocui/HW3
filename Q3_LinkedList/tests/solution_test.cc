#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <string>

TEST(Test0, HandlesTest0) {
  SinglyLinkedList l;
  std::vector<int> v = {10,20,30};
  SinglyLinkedList l1(v,4);
  testing::internal::CaptureStdout();
  l1.print();
  std::string output1 = testing::internal::GetCapturedStdout();
  testing::internal::CaptureStdout();
  l.print();
  std::string output2 = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output1, "10 20 30 \n");
  EXPECT_EQ(output2, "List is Empty!\n");
}

TEST(Test1, HandlesTest1) {
  SinglyLinkedList l;
  l.size();
  
  EXPECT_EQ(l.size(), 0);
}

TEST(Test2, HandlesTest2) {
  SinglyLinkedList l;
  int result = l.empty();
  EXPECT_EQ(result, 1);
}

TEST(Test3, HandlesTest3) {
  SinglyLinkedList l;
  l.push_front(1);
  l.push_front(2);
  testing::internal::CaptureStdout();
  l.print();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "2 1 \n");
  
}

TEST(Test4, HandlesTest4) {
  SinglyLinkedList l;
  l.push_back(1);
  l.push_back(2);
  testing::internal::CaptureStdout();
  l.print();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "1 2 \n");
}

TEST(Test5, HandlesTest5) {
  SinglyLinkedList l;
  l.push_back(1);
  l.push_back(2);
  EXPECT_EQ(l.front(), 1);
  EXPECT_EQ(l.back(), 2);
}

TEST(Test6, HandlesTest6) {
  SinglyLinkedList l;
  l.push_front(1);
  l.push_front(2);
  l.push_back(3);
  l.push_back(4);
  l.insert_after(l.GetIthPointer(1),10);
  testing::internal::CaptureStdout();
  l.print();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "2 1 10 3 4 \n");
}

TEST(Test7, HandlesTest7) {
  SinglyLinkedList l;
  l.push_front(1);
  l.push_front(2);
  l.push_back(3);
  l.push_back(4);
  l.erase(l.Gethead());
  testing::internal::CaptureStdout();
  l.print();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "1 3 4 \n");
}

TEST(Test8, HandlesTest8) {
  SinglyLinkedList l;
  l.push_front(1);
  l.push_front(2);
  l.push_back(3);
  l.push_back(4);
  l.pop_front();
  testing::internal::CaptureStdout();
  l.print();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "1 3 4 \n");
}

TEST(Test9, HandlesTest9) {
  SinglyLinkedList l;
  l.push_front(1);
  l.push_front(2);
  l.push_back(3);
  l.push_back(4);
  l.pop_back();
  testing::internal::CaptureStdout();
  l.print();
  std::string output = testing::internal::GetCapturedStdout();
  EXPECT_EQ(output, "2 1 3 \n");
}

TEST(Test10, HandlesTest10) {
  SinglyLinkedList l;
  l.push_front(1);
  l.push_front(2);
  l.push_back(3);
  l.push_back(4);
  EXPECT_EQ(l.GetBackPointer(), l.GetIthPointer(3));
  EXPECT_EQ(l.head_(), l.GetIthPointer(0));
}

