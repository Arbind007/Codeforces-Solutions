#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i=0;i < t;i++)
	{
	int n,k;
	cin >> n >> k;
	if(n <= k)
	{
		cout << k-n << endl;
		
	}
	else
	{
		cout << ((n%2) ^ (k%2)) << endl;
	}
	}
    return 0;
}
