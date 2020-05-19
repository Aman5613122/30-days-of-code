//leetcode questions

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        int k = nums[0];
        
        if(k != 0)
            return k-1;
        if(k == 0 && n==1)
            return 1;
        
        int j=1,i=0;
        for(i=0; i<n; i++)
        {
            if(i == n-1)
            {
                break;
            }
            if(nums[i]+1 != nums[j])
            {
                break;
            }
            j++;
        }
        
        return nums[i]+1;
    }
};
