#include<bits/stdc++.h>
#include<algorithm>
#include<sys/types.h>
#include<climits>

using namespace std;

void solve(int a[],int n)
{
    for(int i=2;i<=n;i++)
    {
        a[i] = i;
    }

    for(int i=2;i*i<=n;i++)
    {
        if(a[i] != 0)
        {
            for(int j=i+i;j<=n;j+=i)
            {
                a[j] = 0;
            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(a[i] != 0)
        {
            cout <<a[i]<<" ";
        }
    }

}

int main()
{
    int n;
    cin >> n;
    int a[n+1];

    solve(a,n);

    return 0;
}
