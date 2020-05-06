#include<iostream>
#define ll long long

using namespace std;

ll int solve(ll int a[],ll int n)
{
   ll int sum=0;
    for(ll int i=1;i<n;i++)
    {
        int k=i;
        while(k)
        {
            k--;
            if(a[k] < a[i])
            {
                sum+=a[k];
            }
        }
    }

    return sum;
}

int main() {
	ll int n;
	cin >> n;
	ll int a[n];

	for(ll int i=0;i<n;i++)
    {
        cin >> a[i];
    }

   cout << solve(a,n);
	return 0;
}
