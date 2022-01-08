#include <bits/stdc++.h>
using namespace std;

int solve(){
    int b,p,f,h,c,cost=0;
    cin >> b >> p >> f >> h >> c;
    if(c>h)
        swap(h,c),swap(p,f);
    while(b>1 && p>0){
        cost += h;
        b -= 2;
        p--;
    }
    while(b>1 && f>0){
        cost += c;
        b -= 2;
        f--;
    }
    return cost;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        cout << solve() << endl;
    return 0;
}
