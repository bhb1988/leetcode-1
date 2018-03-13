class Solution(object):
    def fizzBuzz(self, n):
        multi = []
        if n == 0:
            print "please input a number lager than 0"
            return multi
            
        for i in range(n):
            if (i+1) % 15 == 0 :
                multi.append( "FizzBuzz")
            elif (i+1) % 3 == 0:
                multi.append("Fizz")
            elif (i+1) % 5 == 0:
                multi.append("Buzz")
            else :
                multi.append(str(i+1))
        return multi
