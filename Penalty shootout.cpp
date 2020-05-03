#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
       bool ans=0;
       int n,i;
       cin >> n;
       int n1=n;
       int n2=n;
       string s;
       int goalA=0,goalB=0;
       cin >> s;
       for(i=0;i<2*n;i++)
       {
           if(i%2 == 0)
           {
               if(s[i]-'0' == 1)
               {
                   goalA++;
                   n1--;
               }else{
                   n1--;
               }
           }else{
               if(s[i]-'0' == 1)
               {
                   goalB++;
                   n2--;
               }else{
                   n2--;
               }
           }

           if((goalA - goalB)>n2 ||
              (goalB - goalA)>n1)
           {
               ans=1;
               break;
           }
       }
       if(ans == 1)
        {
           cout << i+1<<endl;
        }else{
            cout << i<<endl;
        }
   }
    return 0;
}
