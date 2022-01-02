#include <bits/stdc++.h>
using namespace std;

int main(){
    int maxa = INT_MIN,maxb = INT_MIN,a,b,c;
    cin >> a;
    for(int i=0;i<a;i++){
        cin >> c;
        maxa = max(maxa,c);
    }
    cin >> b;
    for(int i=0;i<b;i++){
        cin >> c;
        maxb = max(maxb,c);
    }
    cout << maxa << " " << maxb;
    return 0;
}
