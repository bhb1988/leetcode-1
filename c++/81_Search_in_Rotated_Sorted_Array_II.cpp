/*************************************************************************
	> File Name: Search_in_Rotated_Sorted_Array_II.cpp
	> Author: Pelhans 
	> Mail: me@pelhans.com
	> Created Time: 2018年03月27日 星期二 09时39分01秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int first = 0, last = nums.size();
        while (first != last){
            const int mid = first + (last - first) / 2 ;
            if (nums[mid] == target ) 
                return true;
            if (nums[first] < nums[mid]){
                if (nums[first] <= target && target < nums[mid])
                    last = mid;
                else
                    first = mid + 1;
            }
            else if (nums[first] > nums[mid]){
                if (nums[mid] < target && target <= nums[last-1])
                        first = mid + 1;
                else
                        last = mid;
                }
            else
                first++;
        }
        return false ;
    }
};
