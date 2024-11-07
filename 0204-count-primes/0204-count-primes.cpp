class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
        return 0;
        vector<bool>x(n+1,false);
        int c=0;
        for(int i=2;i<n;i++)
        {
            if(!x[i])
            {
                c++;
                for(int j=i*2;j<n;j+=i)
                {
                        x[j]=true;
                }
            }
        }
        return c;
    }
};