//leetcode questions

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ns = s.size();
        int nt = t.size();
        int j=0;
        for(int i=0;i<nt;i++)
        {
            if(j == ns)
            {
                break;
            }
            if(s[j] == t[i])
            {
                j++;
            }
        }
        if(j == ns)
        {
            return true;
        }else{
            return false;
        }
    }
};
