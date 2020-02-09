#include "solution.h"
#include <iostream>
#include <stack>


bool Solution::Parentheses(std::string &s){
  if(s.length() == 0){
    return true;
  }
  std::stack<char> stack;
  for(int i = 0;i < s.size(); i++){
      if(s[i] == '(' || s[i] == '{' || s[i] == '['){
          stack.push(s[i]);
      }else{
          if(!stack.empty()){
              if(stack.top() == '(' && s[i] ==')'){
                  stack.pop();
                  continue;
              }else if(stack.top() == '[' && s[i] ==']'){
                  stack.pop();
                  continue;
              }else if(stack.top() == '{' && s[i] =='}'){
                  stack.pop();
                  continue;
              }
          }else{
              continue;
          }
      }
  }
  if(stack.empty()) {
    return true;
  }else{
  return false;
  }
}


