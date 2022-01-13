#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,mxa = 0,m,mxb = 0;
	int cnt = 0;
	cin >> n;
	vector<int> a(n);
	for(int i = 0;i < n;i++){
		    cin >> a[i];
	}
	cin >> m;
	vector<int> b(m);
	for(int i = 0;i < m;i++){
		    cin >> b[i];
	}
	for(int i = 0;i < n;i++)
	{
		cnt += a[i];
		mxa = max(mxa, cnt);
	}
	cnt =0;
	for(int i = 0;i < m;i++)
	{
		cnt += b[i];
		mxb = max(mxb,cnt);
	}
	int ans = max(0,mxa + mxb);
	cout << ans << endl;
}

int main()
{
    int num, t, n;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}
