ss Solution(object):
    def isAnagram(self, s, t):
        if len(s)==0 and len(t)==0:  
            return True  
        if len(s.split())==0 or len(t.split())==0:  
            return False  
        else:  
            c1 = self.statics(s)  
            c2 = self.statics(t)  
            if c1==c2:  
                return True  
            else:  
                return False  
    def statics(self,s):  
        count = [0]*26  
        for j in range(ord('a'),(ord('z')+1)):  
            count[j-97] = s.count(chr(j))  
        return count
