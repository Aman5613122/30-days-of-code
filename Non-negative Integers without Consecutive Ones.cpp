Q=> Given a positive integer n, find the number of non-negative integers less than or equal to n,
whose binary representations do NOT contain consecutive ones.

Sample Input
1
5
Sample Output
5
Explanation
Input: 5

Output: 5

Explanation: Here are the non-negative integers <= 5 with their corresponding binary representations:

0 : 0

1 : 1

2 : 10

3 : 11

4 : 100

5 : 101

Among them, only integer 3 disobeys the rule (two consecutive ones) and the other 5 satisfy the rule.

SOLUTION=>

#include<bits/stdc++.h>
#include<algorithm>
#include<sys/types.h>
#include<climits>
#include<map>
#include<string>
#define ll long long

using namespace std;


int coun =1;
int solve(int n)
{
	int one = 0;
	while(n != 0 && n!=1)
	{
		int k = n%2;
		n=n/2;
		if(k == 1)
		{
			one++;
			if(one == 2){return 0;}
		}else{
			one=0;
		}
	}
	one +=n;
	if(one == 2)
    {
        return 0;
    }
	coun ++;
	return 0;
}

int main () {
	int t,n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		while(n)
		{
			solve(n);
			n--;
		}
		cout << coun <<endl;
		coun=1;
	}
	return 0;
}
