class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int> c(24,0);
        for(int i=0;i<24;i++)
        {
            for(int j:candidates)
            {
                if(j &(1<<i))
                {
                    c[i]++;
                }
            }
        }
        return *max_element(c.begin(),c.end());
    }
};