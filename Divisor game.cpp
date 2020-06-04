//leetcode questions

class Solution {
public:
    bool divisorGame(int N) {
        
       long long arr[10000]={0};
        
        for(int i=1;i<=N;i++)
        {
            if(i%2==0)
            {
                arr[i] = 1;
            }else{
                arr[i] = 0;
            }
        }
        
        if(arr[N] == 0)
        {
            return false;
        }else{
            return true;
        }
    }
};
