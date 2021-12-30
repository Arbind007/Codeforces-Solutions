#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,ec=0,eb=0,ek=0,a;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a;
        if(i%3==1){
            ec += a;
        }
        else if(i%3 == 2){
            eb += a;
        }
        else{
            ek += a;
        }
    }
    n = max({ec,eb,ek});
    // cout << n << endl;
    if(ec == n){
        cout << "chest" << endl;
    }
    else if(eb == n){
        cout << "biceps" << endl;
    }
    else{
        cout << "back" << endl;
    }
    return 0;
}
