#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int low=-1,high=-1;
    for(int i=0;i<n;i++){
        if(v[i]){
           low = i;
           break; 
        }
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]){
            high = i;
            break;
        }
    }
    // cout << low << " " << high << endl;
    if(low == high){
        cout << 0 << endl;
        continue;
    }
    int count=0;
    for(int i=low+1;i<high;i++){
        if(v[i] == 0){
            count++;
        }
    }
    cout << count << endl;
    }
    return 0;
}
