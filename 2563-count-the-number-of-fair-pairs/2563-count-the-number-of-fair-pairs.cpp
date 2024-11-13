class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int left=0,right=nums.size()-1;
        sort(nums.begin(),nums.end());
        return count(nums,upper+1)-count(nums,lower);
    }
    long long count(vector<int>&nums,int x)
    {
        long long left=0,right=nums.size()-1;
        long long c=0;
        while(left<right)
        {
            int sum=nums[left]+nums[right];
            if(sum<x)
            {
                c+=(right-left);
                left++;
            }
            else right--;
        }
        return c;
    }
};