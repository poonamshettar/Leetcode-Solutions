class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int c=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]%2!=nums[i]%2)
            c++;
        }
        return c==nums.size()-1;
    }
};