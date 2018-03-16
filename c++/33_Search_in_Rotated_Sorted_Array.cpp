/*************************************************************************
	> File Name: 33_Search_in_Rotated_Sorted_Array.cpp
	> Author: Pelhans 
	> Mail: me@pelhans.com
	> Created Time: 2018年03月16日 星期五 17时45分24秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {   //Check order sequence
        int first = 0;
        int last = nums.size();
        while(first != last){
            const int mid = first + (last - first) / 2;
            if (nums[mid] == target ) return mid;
            if(nums[first] <= nums[mid]){
                if(nums[first] <= target && target <= nums[mid]) 
                    last = mid;
                else
                    first = mid + 1;
            }
            else{
                if(nums[mid] < target && target <= nums[last-1])
                    first = mid + 1;
                else
                    last = mid;
            }
        }
        return -1;
        
    }
};
