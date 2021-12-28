#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,f,k;
    cin >> a >> b >> c >> d >> e >> f >> k;
    float suma = a+b+c;
    float sumb = d+e+f;
    if(ceil(suma/5) + ceil(sumb/10) <= k){
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}
