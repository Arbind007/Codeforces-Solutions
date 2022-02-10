#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x,y,z,ex_a,ex_b;
    int cnt=0,ans=0;
    cin>>x>>y>>z>>a>>b>>c;
    if(a>=x)
        ex_a=a-x, b+=ex_a;
    if(b>=y)
        ex_b=b-y, c+=ex_b; 
    if(a>=x && b>=y && c>=z )
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
return 0;
}
