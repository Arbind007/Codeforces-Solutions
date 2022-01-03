#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=1;
    cin >> n;
    for(int i=0;i<n;i++)
        ans += i*4;
    cout << ans;
    return 0;
}
