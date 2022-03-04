#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,m,n,a,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>m;
        for(int i=0; i<n; i++){
            cin>>a;
            sum+=a;
        }
        cout<<min(m,sum)<<endl;
    }
    return 0;
}
