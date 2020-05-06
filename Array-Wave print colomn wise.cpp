#include<iostream>

using namespace std;

int main() {
	int rows,colomns;
	cin >> rows >> colomns;
    int a[rows][colomns];

	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<colomns;j++)
		{
			cin >> a[i][j];
		}
	}
	int j=0;
	for(int i=0;i<colomns;i++)
	{
		while(j != rows && j>=0)
		{
			if(i%2 == 0)
			{
				cout << a[j][i] << ", ";
				j++;
			}
			else{
				cout << a[j][i] << ", ";
				j--;
			}
		}
		if(i%2 == 0)
		{
			j--;
		}else{
			j++;
		}
	}
	cout << "END";
	return 0;
}
