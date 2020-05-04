//TLE in the last test file so can anyone optimise this then send edit this solution.


#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

int solve(int center, string s,int n)
{
    char alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m'
                    ,'n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int co=0,ans=0;
    for(int j=0;j<26;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(alpha[j] == s[i])
            {
                co++;
            }
        }
        if(co > center)
        {
            ans+=co-center;
        }
        co=0;
    }

    return ans;
}

int main()
{
   int t;
   cin >> t;

   while(t--)
   {
       int n,q;
       cin >> n >> q;
       string s;
        cin >> s;
       while(q--)
       {
           int i;
           cin >> i;

           cout << solve(i,s,n) <<endl;
       }

   }
    return 0;
}
