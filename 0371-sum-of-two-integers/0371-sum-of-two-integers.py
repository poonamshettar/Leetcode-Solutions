class Solution:
    def getSum(self, a: int, b: int) -> int:
       a&=0xffffffff
       b&=0xffffffff
       while b:
        c=(a&b) << 1
        a=(a^b) & 0xffffffff
        b=c & 0xffffffff
       return a if a<0x80000000 else ~(a ^ 0xffffffff)
