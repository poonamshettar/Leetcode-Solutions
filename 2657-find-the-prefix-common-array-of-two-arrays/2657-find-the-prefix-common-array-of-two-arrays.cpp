class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
       vector<int>x(A.size()+1,0);
       vector<int>y(A.size());
       int c=0;
       for(int i=0;i<A.size();i++)
       {
        if(++x[A[i]]==2) c++;
        if(++x[B[i]]==2) c++;
        y[i]=c;
       } 
       return y;
    }
};