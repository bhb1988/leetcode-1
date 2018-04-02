/*************************************************************************
	> File Name: c++/66_Plus_One.cpp
	> Author: Pelhans 
	> Mail: me@pelhans.com
	> Created Time: 2018年04月02日 星期一 10时34分47秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        add(digits, 1);
        return digits;
    }

private:
    void add( vector<int> &digits, int digit){
        int c = digit; //进位
        
        for (auto it = digits.rbegin(); it != digits.rend(); ++it){
            *it += c;
            c = *it / 10;
            *it %= 10;
        }
        if (c > 0) digits.insert(digits.begin(), 1);
    }
};
