class Solution(object):
    def majorityElement(self, nums):
        dict_n = {}
        for x in nums:
            dict_n[str(x) ]  = 0
        for x in nums:
            dict_n[ str(x) ] += 1
        for x in nums:
            if dict_n[str(x)] > len(nums)/2:
                return  x
