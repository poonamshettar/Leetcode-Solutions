class Solution {
public:
    int longestSubarray(vector<int>& nums) {
         int maxi=0,c=0,max_=0;
         for(int num:nums)
         {
            if(num>maxi)
            {
            maxi=num;
            max_=0;
            c=0;
            }
            else if(num<maxi)
            {
                c=0;
            }
            if(num==maxi)
            {
                c++;
            }
            max_=max(c,max_);
         }
         return max_;
    }

};