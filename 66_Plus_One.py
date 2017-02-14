class Solution:  
    # @param digits, a list of integer digits  
    # @return a list of integer digits  
    def plusOne(self, digits):  
        len_s = len(digits)  
        carry = 1  
        for i in range(len_s - 1, -1, -1):  
            total = digits[i] + carry  
            digit = int(total % 10)  
            carry = int(total / 10)  
            digits[i] = digit  
        if 1 == carry:  
            digits.insert(0, 1)  
        return digits  
