//
//  RomanToInteger.cpp
//  LeetCode
//
//  Created by Md Ashik Ashrafe on 22/8/22.
//

#include "RomanToInteger.hpp"
#include <iostream>
#include <map>
#include <string>
using namespace std;


int romanToInt(string s) {
        map<string, int> Romans{
        {"I", 1},
        {"V", 5},
        {"X", 10},
        {"L", 50},
        {"C", 100},
        {"D", 500},
        {"M", 1000}
      };
    int length = s.length();
    int sum = 0;
    
    for(int i=0; i< length; i++){
        string key = string(1,s[i]);
        string key_after = string(1,s[i+1]);
        if(i+1 <length && Romans[key] < Romans[key_after]){
            sum -= Romans[key];
        }else{
            sum +=Romans[key];
        }
    }
    return sum;
    }
