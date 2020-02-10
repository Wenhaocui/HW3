#include "solution.h"
#include <iostream>
#include <string>


void Solution::Vector(std::vector<int> &v){
    int n = 0;
    std::vector<int>::iterator it = v.begin();
    while (n != 5){
        std::cout << "*********************************************************************" <<std::endl;
        std::cout << "{ ";
        for(int i = 0; i <v.size(); i++){
            std::cout << v[i] <<" ";
        }
        std::cout << "}" << std::endl;
        std::cout << "*********************************************************************" <<std::endl;
        std::cout << "Please choose any of the following options:"<<std::endl;
        std::cout << "1. What is the first element?"<<std::endl;
        std::cout << "2. What is the last element?"<<std::endl;
        std::cout << "3. What is the current element?"<<std::endl;
        std::cout << "4. What is the ith element from the current location?"<<std::endl;
        std::cout << "5. Exit."<<std::endl;
        std::cout << "*********************************************************************" <<std::endl;
        
        std::cin >> n;
        
        if(n == 1){
            it = v.begin();
            int result = *it;
            std::cout << "Output: " << result << std::endl;
        }

        if(n == 2){
            it = v.end()-1;
            int result = *it;
            std::cout << "Output: " << result << std::endl;
        }

        if(n == 3){
            int result = *it;
            std::cout << "Output: " << result << std::endl;
        }

        if(n == 4){
            int m;
            std::cout << "Enter the value of i::";
            std::cin >> m;
            if (m < 0){
                std::cout << "Value of i cannot be negative" << std::endl;
            }else if(m > v.size()){
                std::cout << "Value of i cannot be greater than the size of vector" << std::endl;      
            }else if((it+m) >= v.end()){
                // Sorry! You cannot traverse 3 elements from your current location.
                std::cout << "Sorry! You cannot traverse " << m << " elements from your current location."<< std::endl;
            }else{
                it = it+m;
                std::cout << m << "'th Output: " << *it << std::endl;
            }
        }

        if(n > 5){
            std::cout << "You put the wrong number! "  << std::endl;
        }

        // it++;
        // if(it == v.end()){
        //     it =v.begin();
        // }
    }
    std::cout << "Exit! "  << std::endl;

}