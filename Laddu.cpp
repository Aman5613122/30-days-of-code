#include<iostream>
#include<cstring>

using namespace std;

int main()
{
   int t;
   cin >> t;
   int activity;
   int contest;
   int bug;
   string str;
   string origin;
   int ans=0;

   while(t--)
   {
       cin >> activity;
       cin >> origin;

       while(activity--)
       {
           cin >> str;
           if(str == "CONTEST_WON")
           {
               cin >> contest;

               if(contest < 20)
               {
                   ans+=300+(20-contest);
               }else{
                   ans+=300;
               }
           }
           else if(str == "TOP_CONTRIBUTOR")
           {
               ans+=300;
           }
           else if(str == "BUG_FOUND")
           {
               cin >> bug;
               ans+=bug;
           }
           else{
            ans+=50;
           }
       }
       if(origin == "INDIAN")
       {
           ans=ans/200;
       }
       else{
           ans= ans/400;
        }

        cout << ans <<endl;

   }
   return 0;
}
