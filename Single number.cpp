//leetcode questions

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int>m;
        
        for(auto x:nums)
        {
            m[x]=m[x]+1;
        }
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second == 1)
            {
                return it->first;
            }
        }
        return 0;
    }
};
