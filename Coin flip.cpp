#include<iostream>

using namespace std;
int solve(int i,int n,int q)
{
    if(n%2==0)
    {
        return n/2;
    }
    else{
        if(i==1)
        {
            if(q==1)
            {
                return n/2;
            }else{
                return (n/2)+1;
            }
        }
        else{
            if(q==2)
            {
                return n/2;
            }else{
                return (n/2)+1;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int g;
        cin >> g;

        while(g--)
        {
            int i,n,q;

            cin >> i >> n >> q;

           cout << solve(i,n,q)<<endl;
        }
    }
}
