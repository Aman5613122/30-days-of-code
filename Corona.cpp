#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int>v;
    vector<int>ans;
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        for(int i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        int j=1,f=1;
        for(int i=0;i<n;i++)
        {
            if((v[j] - v[i])  > 2)
            {
                ans.push_back(f);
                f=1;
            }
           else if(i == n-1)
            {
                ans.push_back(f);
                f=1;
            }
            else{
                f++;
            }
            j++;
        }

        cout << *min_element(ans.begin(),ans.end()) << " " << *max_element(ans.begin(),ans.end()) << endl;
        ans.clear();
        v.clear();
    }
    return 0;
}
