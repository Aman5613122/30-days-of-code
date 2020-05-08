#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#define ll long long

using namespace std;

int solve(string s)
{
    int size_of_string = s.size();
    int f=0,ans=0;

    for(int i=0;i<size_of_string;i++)
    {
        if(s[i] == '<')
        {
            f++;
        }
        else{
            if(f > 0)
            {
                ans++;
                f--;
            }
        }

    }

    return ans*2;
}

int main() {
	int t;
	cin >> t;

	while(t--)
    {
       string s;

       cin >> s;

       cout << solve(s) <<endl;
    }
	return 0;
}
