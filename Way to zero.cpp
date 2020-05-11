#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int>v;
int solve(int a[],int si,int n)
{
    vector<int>::iterator it;
    it = find(v.begin(),v.end(),si);
    if(it != v.end())
    {
        cout << "False";
        return 0;
    }
    else{
        v.push_back(si);
    }
    if(a[si] == 0)
    {
        cout << "True";
        return 0;
    }
    else{
        int temp;
        if((a[si] + si) < n)
        {
            temp = a[si] + si;
            solve(a,temp,n);
        }
        else{
            if((si - a[si]) < 0)
            {
                cout << "False";
                return 0;
            }
            else{
                temp = si - a[si];
                solve(a,temp,n);
            }
        }
    }
    return 0;
}

int main()
{
	int n,si;
	cin >> n >> si;
	int a[n];

	for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    solve(a,si,n);
    return 0;
}
