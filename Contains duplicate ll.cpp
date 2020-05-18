//leetcode questions

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int j = nums.size();
        for(int i=0;i<j;i++)
        {
            if((m.find(nums[i]) != m.end() && (i - m.find(nums[i])->second) <= k))
            {
              return true;   
            }else{
                m[nums[i]] = i;
            }
        }
        return false;
    }
};
