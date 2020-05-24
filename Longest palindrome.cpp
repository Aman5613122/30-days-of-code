//leetcode questions

class Solution {
public:
    int longestPalindrome(string s) {
        
        int  n = s.size();
        sort(s.begin(),s.end());
        unordered_map<char,int>m;
        
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        
        int ans=0,t=1,odd=0;
        for(int i=0;i<n;i+=t)
        {
            if(m[s[i]]%2==0)
            {
                ans+=m[s[i]];
                t = m[s[i]];
            }
            else
            {
                odd = 1;
                ans += (m[s[i]] - 1);
                t = m[s[i]];
                
            }
        }
        
        ans+=odd;
        return ans;
    }
};
