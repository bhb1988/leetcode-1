/*************************************************************************
	> File Name: 26_Remove_Duplicates_from_Sorted_ArrayII.cpp
	> Author: Pelhans 
	> Mail: me@pelhans.com
	> Created Time: 2018年03月13日 星期二 13时29分51秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size();
        
        int count = 1;
        for (int i = 2; i < nums.size(); i++){
            if (!(nums[count-1] == nums[count] && nums[count] == nums[i])){
                nums[++count] = nums[i];
            }
        }
        return count + 1 ;
    }
};
