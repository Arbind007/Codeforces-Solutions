#include <bits/stdc++.h>
using namespace std;
 
void helper(vector <int> v,int x){
    for (int i = 0; i < x; i++){
        if (v[i] % 2 != v[0] % 2){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
 
int main(){
 
    int n;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        vector <int> v(x);
        for (int i = 0; i < x; i++)
            cin >> v[i];
        helper(v,x);
    }
    return 0;
}
