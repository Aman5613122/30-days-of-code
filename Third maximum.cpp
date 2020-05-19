//leetcode questions

class Solution {
public:
    int thirdMax(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
        auto it = unique(nums.begin(),nums.end());
        nums.resize(distance(nums.begin(),it));
         int n = nums.size();
        
        if(n < 3)
            return *max_element(nums.begin(),nums.end());
        else
            return nums[n-3];
    }
};
