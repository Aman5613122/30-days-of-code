#include<iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int i=5;
        int c=0;
        while(i<n)
        {
            c=c+(n/i);
            i=i*5;
        }

        cout << c <<endl;
    }

    return 0;
}
