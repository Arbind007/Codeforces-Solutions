#include <bits/stdc++.h>
using namespace std; 

int solve(int n){
    if(n == 1 || n == 2 || n == 3){
        return n-1;
    }
    if(n%2 == 0){
        return 2;
    }
    return 3;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
