//leetcode questions

class Solution {
public:
    bool isUgly(int num) {
        
        if(num == 1)
        {
            return true;
        }
        
        if(num <= 0)
        {
            return false;
        }
        
        bool ans=0;
        
        while(num != 1)
        {
            if(num%2 == 0)
            {
                num/=2;
            }
            else if(num%3 == 0)
            {
                num/=3;
            }
            else if(num%5 == 0)
            {
                num/=5;
            }
            else{
                ans = 1;
                break;
            }
        }
        
        if(ans)
        {
            return false;
        }else{
            return true;
        }
    }
};
