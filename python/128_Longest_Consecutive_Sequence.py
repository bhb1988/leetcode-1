#!/usr/bin/env python
# coding=utf-8

class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        set_nums = set(nums)
        
        longest = 0
        for num in nums:
            if num-1 not in set_nums:
                current_num = num
                length = 1
                
                while current_num+1 in set_nums:
                    current_num += 1
                    length += 1
                longest = max(length, longest)
                
        return longest
        
