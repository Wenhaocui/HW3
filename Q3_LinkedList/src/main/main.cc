#include "src/lib/solution.h"
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v = {10,20,30,40};
  SinglyLinkedList l1(v,4);
  l1.print();
  SinglyLinkedList l;
  std::cout << "LinkedList l has " << l.size() << " nodes." << std::endl;
  std::cout << "LinkedList l1 has " << l1.size() << " nodes." << std::endl;
  l.print();
  if (l.empty() == true){
    std::cout<<"true"<<std::endl;
  }else{
    std::cout<<"false"<<std::endl;
  }
  l.push_front(1);
  l.push_front(2);
  l.push_back(3);
  l.push_back(4);
  std::cout << "LinkedList l has " << l.size() << " nodes." << std::endl;
  l.print();
  std::cout << l.front() <<std::endl;
  std::cout << l.back() <<std::endl;
  l.pop_front();
  l.print();
  l.pop_back();
  l.print();
  std::cout << "LinkedList l has " << l.size() << " nodes." << std::endl;
  std::cout << l.GetBackPointer() << std::endl;
  std::cout << l.GetIthPointer(1) << std::endl;
  std::cout << l.head_() << std::endl;
  l.insert_after(l.GetIthPointer(1),10);
  l.print();
  l.erase(l.Gethead());
  l.print();

}

