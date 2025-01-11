class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length()<k) return false;
        if(s.length()==k) return true;
        vector<int> f(26);
        int c=0;
        for(auto& ch:s) f[ch-'a']++;
        for(int i=0;i<26;i++)
        {
            if(f[i]%2==1)
            c++;
        }
        return (c<=k);
    }
};