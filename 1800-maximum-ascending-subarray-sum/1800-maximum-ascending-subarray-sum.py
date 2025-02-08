class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        sum=nums[0]
        maxi=0
        for i in range(1,len(nums)):
            if nums[i]<=nums[i-1]:
                maxi=max(sum,maxi)
                sum=0
            sum+=nums[i]
        return max(maxi,sum)
