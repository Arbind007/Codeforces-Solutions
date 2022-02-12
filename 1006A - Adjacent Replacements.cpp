#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    int a[1010];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] % 2 == 0)
            a[i] = a[i]-1;
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
