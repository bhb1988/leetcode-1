/*************************************************************************
	> File Name: c++/42_Trapping_Rain_Water.cpp
	> Author: Pelhans 
	> Mail: me@pelhans.com
	> Created Time: 2018年04月02日 星期一 10时08分09秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) { //动态规划
        const int n = height.size();
        int *max_left = new int[n]();
        int *max_right = new int[n]();
        
        for (int i = 1; i < n; i++){
            max_left[i] = max(max_left[i - 1], height[i - 1]);
            max_right[n - 1 - i] = max(max_right[n - i], height[n - i]);
        }
        
        int sum = 0;
        for ( int i = 0; i < n; i ++){
            int high = min(max_left[i], max_right[i]);
            if (high > height[i]){
                sum += high - height[i];
            }
        }
        delete[] max_left;
        delete[] max_right;
        return sum;
    }
};
