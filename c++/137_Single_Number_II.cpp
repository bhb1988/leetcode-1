/*************************************************************************
	> File Name: c++/137_Single_Number_II.cpp
	> Author: Pelhans 
	> Mail: me@pelhans.com
	> Created Time: 2018年04月03日 星期二 11时14分45秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution { //hard
public:
    int singleNumber(vector<int>& nums) {
        int one = 0, two = 0, three = 0;
        
        for (auto i : nums){
            two |= (one & i);
            one ^= i;
            three = ~(one & two );
            one &= three;
            two &= three;
        }
        return one;
    }
};
