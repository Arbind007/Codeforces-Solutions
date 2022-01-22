#include <iostream>
using namespace std;

int solve(){
    int n,m;
    cin>>n>>m;
    int ans = min(n,m);
    ans *= 2;
    int left = abs(m-n);
    if(left == 0){
        return ans;
    }
    ans++;
    left--;
    ans += 2*left;
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cout << solve() << endl;
    }
    return 0;
}
