#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    cin >> n;
    vector <int> v(n);
    for(auto &i:v)
        cin >> i;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i+=2){
        sum+=v[i+1]-v[i];
    }
    cout << sum;
    return 0;
}
