#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,t,time;
    cin>>t;
    while(t--)
    {
        time=0;
        cin>>h>>m;
        time=h*60+m;
        cout<<1440-time<<endl;
    }
    return 0;
}
