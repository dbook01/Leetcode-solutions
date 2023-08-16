class Solution(object):
    def divide(self, dividend, divisor):
        ans= abs(dividend)/abs(divisor)
        if dividend >0 and divisor >0 or dividend<0 and divisor <0:
            if ans > 2**31-1:
                ans=2**31-1
            return int(ans)
        else:
            return int(ans)*-1