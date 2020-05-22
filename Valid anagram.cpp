//leetcode questions

class Solution {
public:
    bool isAnagram(string s, string t) {
       int ns = s.size();
        int nt = t.size();

        if(ns != nt)
        {
            return false;
        }

        unordered_map<char,int>m,n;

      for(int i=0;i<ns;i++)
      {
          m[s[i]]++;
      }

    for(int i=0;i<ns;i++)
    {
        n[t[i]]++;
    }
        
    if(n == m)
    {
        return true;
    }else{
        return false;
    }
        
        
    }
};
