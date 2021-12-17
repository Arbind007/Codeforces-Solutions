#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s, t;
    cin >> s >> t;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i] == t[count]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
