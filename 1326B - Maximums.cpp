#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, m = 0, a;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        cout<<a+m<<" ";
        m = max(m,a+m);
    }
    return 0;
}
