#include "src/lib/solution.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


int main() {
Grade obj1, obj2;
obj1.SetMath(5);
obj1.SetComputers(10);
obj1.SetPhysics(95);
std::cout<< "Value before incrementation ::"<< obj1.print() << std::endl;
obj1++;
std::cout<< "Value after incrementation ::"<< obj1.print() << std::endl;
obj1--;
std::cout<< "Value after decrementation ::"<< obj1.print() << std::endl;
obj2 = obj1;
if (obj2 == obj1){
  std::cout<< "Grades equal"<< std::endl;
}
std::cout<< "Value of Object 2::<< obj2.print()" << obj2.print() << std::endl;
obj2+=50;
std::cout<< "Value of Object 2 after increasing marks by 50 for each subject::" << obj2.print() << std::endl;
obj2-=30;
std::cout<< "Value of Object 2 after decreasing marks by 30 for each subject::" << obj2.print() << std::endl;
}




