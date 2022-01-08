#include <bits/stdc++.h>
using namespace std;

int check(int k1,int k2)
{
    return (k1+k2)/2;
}
 

void solve(){
    int n,k1,k2,w,b;
	  cin>>n>>k1>>k2>>w>>b;
	
	  if(check(k1,k2)>=w && check(n-k1,n-k2)>=b)
	  {
	      cout << "YES" << endl;
	      return;
	  }
cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
