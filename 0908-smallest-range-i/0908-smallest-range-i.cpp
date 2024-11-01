class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end())-k;
        int mini=*min_element(nums.begin(),nums.end())+k;
        return maxi-mini>0?maxi-mini:0;
    }
};