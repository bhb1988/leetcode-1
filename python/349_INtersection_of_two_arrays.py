class Solution(object):
    def intersection(self, nums1, nums2):
        res=[];diction={}
        for num1 in nums1:
            if not diction.has_key(num1):
                diction[num1]=1
            else:
                diction[num1]+=1
        for num2 in nums2:
            if diction.has_key(num2) and diction[num2]>=1:
                diction[num2]=0
                res.append(num2)
        return res
