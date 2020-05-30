//leetcode questions

class Solution {
public:
    int romanToInt(string s) {
        
        int len = s.size();
        
        unordered_map<char,int>m;
        
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        int ans=0,j=0,k=0,lst=0;
        for(int i=0;i<len;i++)
        {
            if(i==0)
            {
                ans=m[s[i]];
            }
            else
            {
                if(m[s[j]] < m[s[i]])
                {
                    ans = (m[s[i]] - m[s[j]]) - m[s[j]];
                    j++;
                }else{
                    ans= m[s[i]];
                    j++;
                }
            }
            
            k += ans;
        }
        
        return k;
    }
};
