//leetcode questions

class Solution {
public:
    string reverseVowels(string s) {
        int i=0,l=s.size()-1;
        
        char c[] = "aeiou";
        bool ans=0;
       
        while(i<l)
        {
            if(isVowel(s[i]) && isVowel(s[l]))
            {
                swap(s[i],s[l]);
                l--;
                i++;
            }
            else if(isVowel(s[i]) && !isVowel(s[l]))
            {
                l--;
            }
            else if(!isVowel(s[i]) && isVowel(s[l]))
            {
                i++;
            }
            else {
                l--;
                i++;
            }
        }
        
        return s;
    }
    
    bool isVowel(char chr)
{
    if(chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' || chr == 'A'
       || chr =='E' || chr == 'I' || chr == 'O' || chr == 'U')
    {
        return true;
    }else{
        return false;
    }
}
};
