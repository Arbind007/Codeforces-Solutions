#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,a,b,x,y;
cin>>n;
while(n--){
    cin>>a>>b>>x>>y;
    if(a==x && b==y)
        cout<<a<<" "<<y<<endl;
    else if( b!=y)
        cout<<b<<" "<<y<<endl;
    else if( a!=x)
        cout<<a<<" "<<x<<endl;
}
return 0;
}
