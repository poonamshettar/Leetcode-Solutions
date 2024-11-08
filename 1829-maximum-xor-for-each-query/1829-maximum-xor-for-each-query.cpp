class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
       int n=nums.size();
       vector<int>x(n);
       vector<int>ans(n);
       x[0]=nums[0];
       for(int i=1;i<n;i++)
       {
        x[i]=x[i-1]^nums[i];
       } 
       int mask=(1<<maximumBit)-1;
       for(int i=0;i<n;i++)
       {
        ans[i]=x[n-i-1]^mask;
       }
       return ans;
    }
};