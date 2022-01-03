#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,odd=0,even=0;
    cin >> n;
    while(n--){
        cin >> a;
        if(a % 2)
            odd++;
        else
            even++;
    }
    cout << min(odd,even);
    return 0;
}
