class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        #atoz = list(map(chr,range(97,123)))
        #print atoz
        r = ransomNote.lower()
        m = magazine.lower()
        if len(r) == 0 :
            return True
        dict_r = {}
        dict_m = {}
        for i in r:
            dict_r[i] = dict_r.get(i,0) + 1 
        for i in m:
            dict_m[i] = dict_m.get(i,0) + 1
        print dict_r
        print dict_m
        for k,v in dict_r.items():
            if k not in dict_m.keys():
                return False
            if v > dict_m[k]:
                return False
        return True
