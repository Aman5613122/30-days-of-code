#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int c=1;
        int temp= a[0];
        for(int i=1;i<n;i++)
        {
            if(temp > a[i])
            {
                c++;
                temp = a[i];
            }
        }
        cout << c <<endl;
    }

    return 0;
}
