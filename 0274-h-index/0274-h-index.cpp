class Solution {
public:
    int hIndex(vector<int>& citations) {
     sort(citations.begin(),citations.end());
     int n=citations.size();
     int c=1;
     for(int i=n-1;i>=0;i--)
     {
        if(citations[i]>=c)
          c++;
        else break;
     }   
     return c-1;
    }
};