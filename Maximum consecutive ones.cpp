//leetcode questions

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int n = nums.size();
        int sum =0,ans=0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i] == 1)
            {
                sum+=1;
            }else{
                sum=0;
            }
            ans = max(sum,ans);
        }
        
        return ans;
    }
};
