#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        string s;
        cin>>n>>s;
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}
