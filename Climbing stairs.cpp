//leetcode questions

class Solution {
public:
    int climbStairs(int n) {
        long arr[10000]={0};
        
        arr[1] = 1;
        arr[2] = 2;
        arr[3] = 3;
        if(arr[n] != 0)
        {
            return arr[n];
        }
        int l_li=2,l_i=3;
        for(int i=4;i<=n;i++)
        {
            arr[i] = arr[l_li] + arr[l_i];
            l_li++;
            l_i++;
        }
        return arr[n];
    }
};
