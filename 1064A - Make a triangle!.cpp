#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int x,y,z,ans=0;
    cin>>x>>y>>z;
    if(x>=y+z)
        ans=x-(y+z)+1;
    else if(y>=x+z)
        ans=y-(x+z)+1;
    else if(z>=x+y)
        ans=z-(x+y)+1;
    cout<<ans;
    return 0;
}
