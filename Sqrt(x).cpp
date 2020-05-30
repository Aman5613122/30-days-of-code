//leetcode questions

class Solution {
public:
    int mySqrt(int x) {
        
        if(x == 1 || x == 0)
        {
            return x;
        }
        
        for(long long i=2;i<=(x/2)+1;i++)
        {
            if(i*i == x)
            {
                return i;
            }
            else if(i*i > x)
            {
                return i-1;
            }
        }
        return 0;
    }
};
