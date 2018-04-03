/*************************************************************************
	> File Name: c++/89_Gray_Code.cpp
	> Author: Pelhans 
	> Mail: me@pelhans.com
	> Created Time: 2018年04月03日 星期二 09时35分56秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> result;
        result.reserve(1<<n);
        result.push_back(0);
        
        for (int i = 0; i < n; i++){
            const int highest_bit = 1 << i;
            for (int j = result.size() - 1; j >= 0; j--)
                result.push_back(highest_bit | result[j]);
        }
        return result;
    }
};
