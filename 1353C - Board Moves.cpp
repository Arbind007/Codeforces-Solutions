#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    
	if (n == 1) {
		cout << 0 << endl ;
		return;
	}
	long long moves = 0 ;
	long long layer = 8 ;
	for (int i = 1 ; i <= n/2 ; ++i) {
		moves += layer*i ;
		layer += 8 ;
	}
	cout << moves << endl ;
}

int main(){
    int m;
    cin >> m;
    while(m--){
        int n ;
	    cin >> n ;
        solve(n);
    }
    
    
    return 0;
}
