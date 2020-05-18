//leetcode questions

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v;
        int l_index = numbers.size()-1;
        int f_index = 0;
        
        while(f_index < l_index)
        {
            int temp = numbers[f_index] + numbers[l_index];
            if(temp > target)
            {
                l_index--;
            }
            else if(temp < target)
            {
                f_index++;
            }
            else if(temp == target)
            {
                v.push_back(f_index+1);
                v.push_back(l_index+1);
                break;
            }
        }
        
        return v;
    }
};
