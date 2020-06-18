//leetcode questions

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int c=0;
        vector<string>v;
        for(int i=1;i<=n;i++)
        {
            if(c == target.size())
            {
                break;
            }
            else if(find(target.begin(),target.end(),i) != target.end())
            {
                v.push_back("Push");
                c++;
            }
            else{
                v.push_back("Push");
                v.push_back("Pop");
            }
        }
        
        return v;
    }
};
