//leetcode questions

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int k = digits.size()-1;
        digits[k]++;
        while((digits[k] > 9) && (k >= 0))
        {
            int t = digits[k]/10;
            digits[k] = digits[k]%10;
            
            if(k == 0)
            {
                digits.insert(digits.begin(),t);
                return digits;
            }
               
            k--;
            digits[k] += t;
        }
        return digits;
    }
};
