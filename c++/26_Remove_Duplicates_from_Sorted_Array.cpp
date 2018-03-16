/*************************************************************************
	> File Name: 26_Remove_Duplicates_from_Sorted_Array.cpp
	> Author: pelhans
	> Mail: me@pelhans.com
	> Created Time: 2018年03月13日 星期二 11时10分02秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 1) return 0;
        
        int count = 0;
        for (int i; i < nums.size(); i++){
            if (nums[i] != nums[count]){
                nums[++count] = nums[i];
            }
        }
        return count + 1;
    }
};
