#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   int t,pr=0,ans=0;
   cin >> t;
   while(t--)
   {
       int n;
       cin >> n;
       while(n--)
       {
           pr=0;
           int s,p,l,temp;
           cin >> s >> p >> l;
           pr = (p/(s+1))*l;
           if(pr>ans)
           {
               ans = pr;
           }
       }
       cout << ans <<endl;

   }
    return 0;
}
