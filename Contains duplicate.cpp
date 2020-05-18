//leetcode questions

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     int k = nums.size();
        
        unordered_set<int>s;
        
        for(auto x:nums)
        {
            s.insert(x);
        }
        
        if(k == s.size())
            return false;
        else
            return true;
    }
};
