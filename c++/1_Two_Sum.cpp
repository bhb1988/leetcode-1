/*************************************************************************
	> File Name: c++/1_Two_Sum.cpp
	> Author: Pelhans 
	> Mail: me@pelhans.com
	> Created Time: 2018年03月28日 星期三 17时40分28秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapping;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
            mapping[nums[i]] = i;
        for (int i = 0; i < nums.size(); i++){
            const int gap = target - nums[i];
            if (mapping.find(gap) != mapping.end() && mapping[gap] > i){
                result.push_back(i );
                result.push_back(mapping[gap]);
                break;
            }
        }
        return result;
    }
};
