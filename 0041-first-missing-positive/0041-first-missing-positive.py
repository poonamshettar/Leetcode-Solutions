class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        num=[n for n in nums if n>0]
        for i in num:
            idx=abs(i)-1
            if idx<len(num):
                num[idx]*=-1
        for i in range(len(num)):
            if num[i]>0:
                return i+1
        return len(num)+1