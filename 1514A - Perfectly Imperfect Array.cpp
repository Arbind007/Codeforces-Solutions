#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin>>arr[i];
        }
        bool found = false;
        for (int i = 0; i < n; ++i) {
            int x = sqrt(arr[i]);
            if ( x*x != arr[i]){
                found = true;
                break;
            }
        }
        if (found){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
}
