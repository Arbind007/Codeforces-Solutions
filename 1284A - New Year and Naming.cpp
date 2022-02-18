#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i;
	cin >> n >> m;
	vector <string> v1(n),v2(m);
	for(auto &it:v1)
	    cin >> it;
	for(auto &it:v2)
	    cin >> it;
	int t;
	cin >> t;
	while(t--){
	    cin >> i;
	    i--;
	    cout << v1[i%n] << v2[i%m] << endl;
	}
    return 0;
}
