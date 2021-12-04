#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t;
    cin >> t;
    unordered_map<char,int> mp;
    while(t--){
        char c;
        cin >> c;
        mp[c]++;
    }
    // for(auto i : mp){
    //     cout << i.first << " " << i.second << endl;
    // }
    while(mp['n'] > 0){
        cout << "1 ";
        mp['n']--;
    }
    while(mp['z'] > 0){
        cout << "0 ";
        mp['z']--;
    }
    return 0;
}
