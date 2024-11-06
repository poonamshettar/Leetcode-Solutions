class Solution {
public:
    int compress(vector<char>& chars) {
        int idx=0;
        int c=0;
        char ch=chars[0];
        string x;
        for(int i=0;i<chars.size();i++)
        {
            c=0;
            ch=chars[i];
        while(i<chars.size() && chars[i]==ch)
        {
            c++;
            i++;
        }
        if(c==1)
        {
            chars[idx++]=ch;
        }
        else
        {
            chars[idx++]=ch;
            x=to_string(c);
            for(char y:x)
            chars[idx++]=y;
        }
        i--;
    }
    chars.resize(idx);
    return chars.size();
    }
};