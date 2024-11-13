class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
    vector<vector<int>> res={{0,0,INT_MAX}};
    sort(items.begin(),items.end());
    for (const auto& i:items)
    {
        int p=i[0];
        int b=i[1];
        if(b>res.back()[1])
        {
            res.back()[2]=p;
            res.push_back({p,b,INT_MAX});
        }
    } 
    vector<int>ans;
    for (int x : queries) {
            for (int i = res.size() - 1; i >= 0; i--) {
                if (res[i][0] <= x) {
                    ans.push_back(res[i][1]);
                    break;
                }
            }
        }
        return ans;
    }
};