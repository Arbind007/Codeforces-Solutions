#include <bits/stdc++.h>
using namespace std;
 
void solve(){
  int n;
  string s;
	cin>>n;
	cin>>s;
	if(n==1)
	    cout<<"-1 -1" << endl;
	else
	{
		char ch=s[0];
		int i;
		for(i=1;i<n;i++)
		{
			if(s[i]!=ch){
			    cout<<i<<" "<<i+1<<endl;
			    break;
			    
			}
		}
		if(i == n){
		   cout<<"-1 -1" << endl; 
		}
	}
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
    solve();
    } 
    return 0;
}
