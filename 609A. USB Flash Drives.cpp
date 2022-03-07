#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    long long int m,sum=0;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    int c=0;
    for(int i=0; i<n; i++){
        c++;
        sum+=a[i];
        if(sum>=m){
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}
