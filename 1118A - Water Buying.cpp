#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long x,y,z,q,f,n;
    long long cnt=0,ans;
    cin >> n;
    while(n--){
        cin>>x>>y>>z;
        if(x>1)
        {
            q=x/2;
            f=x%2;
            ans=q*z +(f*y);
 
            ans= min(ans, (x*y));
            cout << ans << endl;
        }
        else
            cout << x*y << endl;
    }
    return 0;
}
