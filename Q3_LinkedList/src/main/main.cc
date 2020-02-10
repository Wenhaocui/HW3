#include "src/lib/solution.h"
#include <iostream>

int main() {
  SinglyLinkedList l;
  std::cout << "LinkedList has " << l.size() << " nodes." << std::endl;
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
  l.print();
  std::cout << l.front() <<std::endl;
  std::cout << l.back() <<std::endl;
  l.pop_front();
  l.print();
  l.pop_back();
  l.print();
  std::cout << l.GetBackPointer() << std::endl;
  std::cout << l.GetIthPointer(1) << std::endl;
  std::cout << l.head_() << std::endl;
  l.insert_after(l.GetIthPointer(1),10);
  l.print();
  l.erase(l.Gethead());
  l.print();

}

