#include <bits/stdc++.h>
using namespace std;

int solve(int n){
   int total=0;
   int num=1;
   while(n>0){
       total++;
       n-=num;
       num+=2;
   }
   return total;
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
