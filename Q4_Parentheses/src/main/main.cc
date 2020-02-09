#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  std::string s1 = "(a+b)";
  std::cout << s1 << std::endl;
  if(solution.Parentheses(s1) == 1){
    std::cout << "true" << std::endl;
  }else{
    std::cout << "false" << std::endl;
  }

  std::string s2 = "(a+b)[c*d]{5g+h}";
  std::cout << s2 << std::endl;
  if(solution.Parentheses(s2) == 1){
    std::cout << "true" << std::endl;
  }else{
    std::cout << "false" << std::endl;
  }

  std::string s3 = "(a+b]";
  std::cout << s3 << std::endl;
  if(solution.Parentheses(s3) == 1){
    std::cout << "true" << std::endl;
  }else{
    std::cout << "false" << std::endl;
  }
    
  std::string s4 = "(7h+[5c)+7]";
  std::cout << s4 << std::endl;
  if(solution.Parentheses(s4) == 1){
    std::cout << "true" << std::endl;
  }else{
    std::cout << "false" << std::endl;
  }

  std::string s5 = "{2k+[5j]}";
  std::cout << s5 << std::endl;
  if(solution.Parentheses(s5) == 1){
    std::cout << "true" << std::endl;
  }else{
    std::cout << "false" << std::endl;
  }

  std::string s6 = "{2k++[5--*j]}";
  std::cout << s6 << std::endl;
  if(solution.Parentheses(s6) == 1){
    std::cout << "true" << std::endl;
  }else{
    std::cout << "false" << std::endl;
  }
}

