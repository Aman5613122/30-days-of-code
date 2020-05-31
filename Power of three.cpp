//leetcode questions

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0 || n==2)
        {
            return false;
        }
        
        int i=0;
        while(pow(3,i) <= n)
        {
            if(pow(3,i) == n)
            {
                return true;
            }
            i++;
        }
        return false;
    }
};
