class Solution {
public:
    bool isHappy(int n) {
    int sum=0,x;
    unordered_set<int> seen;
    while(n!=1 && seen.find(n)==seen.end())
    {
        seen.insert(n);
        sum=0;
        while(n)
        {
            x=n%10;
            sum+=(x*x);
            n/=10;
        }
        n=sum;
    }
    return n==1;
    
}
};