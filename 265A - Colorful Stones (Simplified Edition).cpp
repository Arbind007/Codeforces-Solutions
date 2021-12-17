#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s, t;
    cin >> s >> t;
    int count=0;
    for(int i=0;i<t.length();i++){
        if(t[i] == s[count]){
            count++;
        }
    }
    cout << count+1 << endl;
    return 0;
}
