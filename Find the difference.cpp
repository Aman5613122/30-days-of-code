//leetcode questions

class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int ns = s.size();
        int nt = t.size();
        
        unordered_map<char,int>m;
        
        for(int i=0;i<ns;i++)
        {
            m[s[i]]++;
        }
        
        for(int i=0;i<nt;i++)
        {
            if(m.find(t[i]) != m.end() && m[t[i]] >= 1)
            {
                m[t[i]]--;
            }else{
                return t[i];
            }
        }
        
        return 0;
    }
};
