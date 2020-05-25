//leetcode questions

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        unordered_set<char>r1={'Q','W','E','R','T','Y','U','I','O','P','q','w','e','r','t','y','u','i','o','p'};
   unordered_set<char>r2={'A','S','D','F','G','H','J','K','L','a','s','d','f','g','h','j','k','l'};
   unordered_set<char>r3={'Z','X','C','V','B','N','M','z','x','c','v','b','n','m'};
        
        vector<string>v;
        
        int co1=0,co2=0,co3=0;
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                if(r1.find(words[i][j]) != r1.end())
                {
                    co1++;
                }else if(r2.find(words[i][j]) != r2.end())
                {
                    co2++;
                }else if(r3.find(words[i][j]) != r3.end())
                {
                    co3++;
                }
            }
            if(co1 > 0 && (co2==0 && co3==0))
            {
                v.push_back(words[i]);
            }
            else if(co2 > 0 && (co1==0 && co3==0))
            {
                v.push_back(words[i]);
            }
            else if(co3 > 0 && (co1==0 && co2==0))
            {
                v.push_back(words[i]);
            }
            co1=0;
            co2=0;
            co3=0;
        }
        
        return v;
        
    }
};
