#include <bits/stdc++.h>
using namespace std;


int main(){
    int m;
    cin >> m;
    while(m--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);
    int i=0;
    while(i<n and arr[i]==arr[0]){
      i++;
    }
    cout<<n-i;
    cout<<endl;
    }
    return 0;
}
