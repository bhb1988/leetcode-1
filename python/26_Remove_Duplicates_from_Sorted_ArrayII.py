#!/usr/bin/env python
# coding=utf-8

class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) <=2:
            return len(nums)
        
        count = 1
        for i in range(2, len(nums)):
            if not (nums[count-1] == nums[count] and nums[count] == nums[i]):
                count = count + 1
                nums[count] = nums[i]
        return count + 1
