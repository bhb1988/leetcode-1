/*************************************************************************
	> File Name: c++/31_Next_Permutation.cpp
	> Author: Pelhans 
	> Mail: me@pelhans.com
	> Created Time: 2018年03月30日 星期五 09时39分50秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
    }
    
    template<typename BidiIt>
    bool next_permutation(BidiIt first, BidiIt last){
        const auto rfirst = reverse_iterator<BidiIt>(last);
        const auto rlast = reverse_iterator<BidiIt>(first);
        auto pivot = next(rfirst);
        
        while(pivot != rlast && *pivot >= *prev(pivot))
            ++pivot;
        if (pivot == rlast){
            reverse(rfirst, rlast);
            return false;
        }
        auto change = find_if(rfirst, pivot, bind1st(less<int>(), *pivot));
        
        swap(*change, *pivot);
        reverse(rfirst, pivot);
        
        return true;
    }
};
