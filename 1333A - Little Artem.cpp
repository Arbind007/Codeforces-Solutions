#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        char a[101][101];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i==0 && j==0)
                    a[i][j]='W';
                else
                    a[i][j]='B';
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
