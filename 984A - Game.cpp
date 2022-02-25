
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
	cin >> n;
	int temp[n+1];
	for (int i = 1;i <= n;++i)
		cin >> temp[i];
	sort(temp + 1, temp + 1 + n);
	if (n % 2 == 0) {
		cout <<  temp[n/2] << endl;;
	}
	else {
		cout << temp[n/2 + 1] << endl;
	}
	return 0;
}
