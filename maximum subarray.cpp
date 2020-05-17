//leetcode questions

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = nums[0];
        int ans = nums[0];
        int k = nums.size();
        for(int i=1;i<k;i++)
        {
            curr = max(curr+nums[i],nums[i]);
            ans = max(ans,curr);
        }
        
        return ans;
    }
};
