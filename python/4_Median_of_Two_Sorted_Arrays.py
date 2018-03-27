#!/usr/bin/env python
# coding=utf-8

def median(x):
    if len(x) % 2:
        return x[len(x) // 2]
    else:
        return (x[len(x) // 2 - 1] + x[len(x) // 2]) / 2
    
def findMedianSortedArrays(self, nums1, nums2):
    nums = nums1 + nums2
    nums.sort()
    return Solution.median(nums)
