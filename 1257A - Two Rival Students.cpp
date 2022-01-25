#include<bits/stdc++.h>
using namespace std ;
int n,x,a,b;
int main() {
    int t;
    cin>>t;
    while(t--) {
        cin>>n>>x>>a>>b;
        if((abs(a-b)+x)>(n-1)) 
            cout<<n-1<<endl;
        else 
            cout<<(abs(a-b)+x)<<endl;
    }
    return 0;
}
