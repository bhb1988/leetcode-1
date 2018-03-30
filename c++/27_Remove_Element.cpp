/*************************************************************************
	> File Name: c++/27_Remove_Element.cpp
	> Author: Pelhans 
	> Mail: me@pelhans.com
	> Created Time: 2018年03月30日 星期五 09时06分38秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = 0;
        for (int i = 0; i < nums.size(); ++i){
            if (nums[i] != val)
                nums[length++] = nums[i];
        }
        return length;
    }
};
