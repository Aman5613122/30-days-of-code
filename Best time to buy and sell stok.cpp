//leetcode question

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int k= prices.size();
        int curr,fil=0;
        int ans =0;
        for(int i=0;i<k;i++)
        {
            curr = prices[i];
            for(int j=i+1;j<k;j++)
            {
                if(curr < prices[j])
                {
                    ans = max(ans,prices[j] - curr);
                }
            }
            fil = max(fil,ans);
        }
        
        return fil;
    }
};
