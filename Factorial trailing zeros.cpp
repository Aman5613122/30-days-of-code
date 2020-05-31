//leetcode questions

class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0,i=1,k=0;
        while(n >= pow(5,i))
        {
            k = pow(5,i);
            ans += n/k;
            i++;
        }
        
        return ans;
    }
};
