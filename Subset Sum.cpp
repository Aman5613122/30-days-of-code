#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

int solve(int a[],int gi,int n)
{
    for(int i=0;i<n;i++)
    {
       long long int temp = a[i];
        for(int j=i+1;j<n;j++)
        {
            temp +=a[j];

            if(temp == gi)
            {
                cout << "Yes";
                return 0;
            }
            if(temp > gi)
            {
                break;
            }
        }
        temp=0;
    }

    cout << "No";
    return 0;
}

int main()
{
    int n,gi;

    cin >> n >> gi;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    solve(a,gi,n);
    return 0;
}
