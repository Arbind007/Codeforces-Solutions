#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int cnt=0;
		for(int i=n*4; i>=0; --i) {
			if(cnt==n)
				break;
			if(i%2==0&&i!=2) {
				cout << i << " ";
				cnt++;
			}
		}
		cout << endl;
	}
    return 0;
}
