#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <iostream>
#include <string>
#include <algorithm>

class Grade {
public:
  Grade(){
    Math_ = 0;
    Computers_ = 0;
    Physics_ = 0;
  }
  Grade(int Math, int Computers, int Physics){
    Math_ = Math;
    Computers_ = Computers;
    Physics_ = Physics;
  }
  Grade(const Grade &s2) {
    Math_ = s2.GetMath();
    Computers_ = s2.GetComputers();
    Physics_ = s2.GetPhysics();
  }

  ~Grade() { }

  int GetMath() const { return Math_; };
  int GetComputers() const { return Computers_; };
  int GetPhysics() const { return Physics_; };
  void SetMath(int Math) { Math_ = Math; };
  void SetComputers(int Computers) { Computers_ = Computers; };
  void SetPhysics(int Physics) { Physics_ = Physics; };

  Grade operator++(int) {
    Grade temp = *this;
    Math_ = Math_ + 10;
    Computers_ = Computers_ + 10;
    Physics_ = Physics_ + 10;
    if (Math_ > 100){
      Math_ = 100;
    }else if(Math_ < 0){
      Math_ = 0;
    }
    if (Computers_ > 100){
      Computers_ = 100;
    }else if(Computers_ < 0){
      Computers_ = 0;
    }
    if (Physics_ > 100){
      Physics_ = 100;
    }else if(Physics_ < 0){
      Physics_ = 0;
    }
    return temp;
  }


  Grade operator--(int) {
    Grade temp = *this;
    Math_ = Math_ - 20;
    Computers_ = Computers_ - 20;
    Physics_ = Physics_ - 20;
    if (Math_ > 100){
      Math_ = 100;
    }else if(Math_ < 0){
      Math_ = 0;
    }
    if (Computers_ > 100){
      Computers_ = 100;
    }else if(Computers_ < 0){
      Computers_ = 0;
    }
    if (Physics_ > 100){
      Physics_ = 100;
    }else if(Physics_ < 0){
      Physics_ = 0;
    }
    return temp;
  }

  Grade& operator+=(int number)
  {
    this->Math_ += number;
    this->Computers_ += number;
    this->Physics_ += number;
    if (this->Math_ > 100){
      this->Math_ = 100;
    }else if(this->Math_ < 0){
      this->Math_ = 0;
    }
    if (this->Computers_ > 100){
      this->Computers_ = 100;
    }else if(this->Computers_ < 0){
      this->Computers_ = 0;
    }
    if (this->Physics_ > 100){
      this->Physics_ = 100;
    }else if(Physics_ < 0){
      this->Physics_ = 0;
    }
    return *this;
  }

  Grade& operator-=(int number)
  {
    this->Math_ -= number;
    this->Computers_ -= number;
    this->Physics_ -= number;
    if (this->Math_ > 100){
      this->Math_ = 100;
    }else if(this->Math_ < 0){
      this->Math_ = 0;
    }
    if (this->Computers_ > 100){
      this->Computers_ = 100;
    }else if(this->Computers_ < 0){
      this->Computers_ = 0;
    }
    if (this->Physics_ > 100){
      this->Physics_ = 100;
    }else if(Physics_ < 0){
      this->Physics_ = 0;
    }
    return *this;
  }
 
  friend bool operator==(const Grade &s1, const Grade &s2){
      return std::tie(s1.Math_ , s1.Computers_ , s1.Physics_) == std::tie(s2.Math_ , s2.Computers_ , s2.Physics_);
  }

  std::string print();

private:
  int Math_;
  int Computers_;
  int Physics_;

};

#endif