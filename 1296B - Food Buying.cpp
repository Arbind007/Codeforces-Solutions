#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int m;
    cin >> m;
    while(m--){
    int n;
    cin >> n;
    int ans=n;
    while(n>=10){
       ans += n / 10;
       n = n%10 + n/10;
    }
    
    cout << ans << endl;
    }
    return 0;
}
