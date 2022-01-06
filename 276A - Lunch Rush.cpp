#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,f,t,maxjoy,joy;
    cin >> n >> k >> f >> t;
    n--;
    if (t > k)
    {
        maxjoy = f - (t - k);
    }
    else
    {
        maxjoy = f;
    }
    while(n--){
        cin >> f >> t;
        if (t > k)
        {
            joy = f - (t - k);
        }
        else
        {
            joy = f;
        }
        maxjoy = max(maxjoy,joy);
    }
    cout << maxjoy << endl;
    return 0;
}
