#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int minno,maxno=0,n,a;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a;
            if(i == 0){
                minno = a;
            }
            minno = min(minno,a);
            maxno = max(maxno,a);
        }
        cout << maxno - minno << endl;
    }
    return 0;
}
