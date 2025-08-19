class Solution:
    def zeroFilledSubarray(self, nums: List[int]) -> int:
        count=0
        curr=0
        for i in nums:
            if i==0:
                curr+=1
                count+=curr
            else:
                curr=0
        return count

