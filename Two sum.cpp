//leetcode questions

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        bool a=0;
        int i=0,j=0;
        int k=nums.size();
        for(i=0;i<k;i++)
        {
            for(j=i+1;j<k;j++)
            {
                int t = nums[i] + nums[j];
                
                if(t == target)
                {
                    a=1;
                    break;
                }
            }
            
            if(a  == 1)
            {
                break;
            }
        }
        
        vector<int>v;
        v.push_back(i);
        v.push_back(j);
        
        return v;
       
    }
};
