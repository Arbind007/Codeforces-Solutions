#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a[101],b[101];
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<m; i++){
            cin>>b[i];
        }
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i] == b[j]){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
