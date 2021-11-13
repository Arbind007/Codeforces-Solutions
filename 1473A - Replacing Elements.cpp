#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
    int a,b;
    cin >> a >> b;
    vector <int> v(a);
    for(auto &i : v){
        cin >> i;
    }
    sort(v.begin(),v.end());
    // for(auto &i : v){
    //     cout << i << " ";
    // }
    
    int m = v[a-1];
    // cout << m;
    if(m <= b){
        cout << "YES" << endl;
    }
    else{
        // cout << v[0] << " " << v[1];
        if(v[0]+v[1] <= b){
            cout << "YES" << endl;
        }
        else{
        cout << "NO" << endl;
        }
    }
    }
    return 0;
}
