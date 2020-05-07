#include<iostream>
#define ll long long

using namespace std;

ll int solve(int n)
{
   ll int a[100];
   ll int sum=0;
    a[0]=1;
    a[1]=1;
    if(n == 1)
    {
        return a[0]+a[1];
    }
    if(n == 0)
    {
        return 0;
    }
    int j=2;
    for(int i=1;i<=n;i++)
    {
        sum = a[i]+a[i-1];
        a[j] = sum;
        j++;
    }

    return sum;
}

int main() {
	int t;
	cin >> t;

	while(t--)
    {
        int n;
        cin >> n;

        cout << solve(n) <<endl;
    }
	return 0;
}
