/*************************************************************************
	> File Name: c++/136_Single_Number.cpp
	> Author: Pelhans 
	> Mail: me@pelhans.com
	> Created Time: 2018年04月03日 星期二 11时10分47秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for (auto i : nums)
            x ^= i;
        return x;
    }
};
