#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;
vector<long long int>n;
long long int solve(vector<long long int>a,long long int c)
{
    sort(a.begin(),a.end());
    for(int i=0;i<c;i++)
    {
        n.push_back(a[i]*(c-i));
    }
    cout << *max_element(n.begin(),n.end());
    return 0;
}
int main()
{
    long long int ctmr,k;
    vector<long long int>a;

    cin >> ctmr;
   long long int j=ctmr;

    while(ctmr--)
    {
        cin >> k;
        a.push_back(k);
    }

    solve(a,j);
    return 0;
}
