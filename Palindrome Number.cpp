//leetcode questions

class Solution {
public:
    bool isPalindrome(int x) {
        
        
    string s = to_string(x);

    long long len = s.size(),k;

    if(len == 1)
    {
        return true;
    }
    else{
        reverse(s.begin(),s.end());

        stringstream ans(s);

         k=0;
        ans >> k;
    }

    if(k == x)
    {
        return true;
    }else{
        return false;
    }
    }
};
