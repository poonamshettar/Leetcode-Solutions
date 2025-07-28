class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        dp= [0] * (len(nums)+1)
        result=[]
        for num in nums:
            dp[num]=1
        for i in range(1,len(dp)):
            if dp[i]==0:
                result.append(i)
        return result

        