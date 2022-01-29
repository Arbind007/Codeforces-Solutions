#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n,maxint = 0,temp = 0;
    cin >> n;
    while(n>0){
        temp = n % 10;
        maxint = max(maxint,temp);
        if(maxint == 9)
            return 9;
        n /= 10;
    }
    return maxint;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        cout << solve() << endl;
    return 0;
}
