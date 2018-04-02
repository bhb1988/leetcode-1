/*************************************************************************
	> File Name: c++/70_Climbing_Stairs.cpp
	> Author: Pelhans 
	> Mail: me@pelhans.com
	> Created Time: 2018年04月02日 星期一 11时16分59秒
 ************************************************************************/

#include<iostream>

using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        vector<int> res(3);
        res[0] = 1;
        res[1] = 1;
        
        for (int i = 2; i <= n; i++)
            res[i%3] = res[(i-1)%3] + res[(i-2)%3];
        return res[n%3];
    }
};
