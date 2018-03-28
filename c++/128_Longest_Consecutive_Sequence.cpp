/*************************************************************************
	> File Name: c++/128_Longest_Consecutive_Sequence.cpp
	> Author: Pelhans 
	> Mail: me@pelhans.com
	> Created Time: 2018年03月28日 星期三 13时16分53秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, bool> used;
        for (auto i : nums) used[i] = false;
        int longest = 0;
        for (auto i : nums){
            if (used[i] ) continue;
            int length = 1;
            used[i] = true;
            for (int j = i+1; used.find(j) != used.end(); ++j ){
                used[j] = true;
                ++length;
            }
            for (int j = i-1; used.find(j) != used.end(); --j ){
                used[j] = true;
                ++length;
            }
            longest = max(longest, length);
        }
        return longest;
    }
};
