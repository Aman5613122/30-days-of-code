//leetcode questions

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_set<int>si;
        int n = candies.size();
        int g = n/2;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(si.find(candies[i]) == si.end() && si.size() < g)
            {
                si.insert(candies[i]);
                c++;
            }
        }
        return c;
    }
};
