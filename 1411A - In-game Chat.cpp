#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i,n,t,ans;
    string s;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        cin>>s;
        for(i=n-1;i>=0;i--)
        {
            if(s[i]==')')
                ans++;
            else
                break;
        }
        if(ans*2>n)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
