#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> a(n);
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		--a[i];
	}
	for(int i = 0; i < n; ++i) {
		if(a[i] == a[a[a[a[i]]]]) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;

	return 0;
}
