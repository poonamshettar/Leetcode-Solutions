class Solution {
public:
    int minimumLength(string s) {
        map<char,int>x;
        for(char p:s)
        x[p]++;
        int c=0;
        for(auto& y:x)
        {
            int z=y.second;
            if(z%2==0)
            {
                c+=z-2;
            }
            else
            {
                c+=z-1;
            }
        }
        return s.length()-c;
    }
};