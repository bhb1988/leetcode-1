class Solution(object):
    hexDic={0:'0',1:'1',2:'2',3:'3',4:'4',5:'5',6:'6',7:'7',8:'8',9:'9',10:'a',11:'b',12:'c',13:'d',14:'e',15:'f'}
    def toHex(self, num):
        returnStr=[]
        if(num==0):
            return '0'
        if num>=pow(2,32) or num <-pow(2,32):
            return False
        if(num<0):
            print num
            num=pow(2,32)-1-abs(num)+1
            print num
     
        while True:
            remainder=num%16
            divisior=num/16

            returnStr.append(self.hexDic.get(remainder))
            print remainder,divisior
            if(divisior<16):
                returnStr.append(self.hexDic.get(divisior))
                break
            num=divisior
        print returnStr
        returnStr.reverse()
        if returnStr[0]== '0':del returnStr[0]
        return ''.join(returnStr)

sol=Solution()
print sol.toHex(1)
