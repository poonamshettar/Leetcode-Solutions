class Solution {
public:
    int maximumSwap(int num) {
        // vector<int> right_max;
        string n=to_string(num);
        int maxi=n.size()-1;
        vector<int> right_max(n.size());
        for(int i=n.size()-1;i>=0;i--)
        {
            if(n[i]>n[maxi])
            {
            maxi=i;
            }
            right_max[i]=maxi;
            
        }
        for(int i=0;i<n.size();i++)
        {
            if(n[i]<n[right_max[i]])
            {
                swap(n[i],n[right_max[i]]);
                break;
            }
        }
        return stoi(n);
    }
};