
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int y,b,r;
    long long ans=0;
    cin>>y>>b>>r;
    for(int i =1;i<=y;i++)
        if(b>=i+1 && r>=i+2) 
            ans=3*i+3;
    cout<<ans<<endl;
return 0;
}
