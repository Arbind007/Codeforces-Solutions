#include <bits/stdc++.h>
using namespace std;
 
int main(){
    vector <string> s(5); //vector of string
    bool tu = false;
    string str;
    cin >> str;
    for(auto &i:s){
        cin >> i;
    }
    
    for(int i=0;i<5;i++){
        if(str[0] == s[i][0]){
            tu = true;
            break;
        }
        if(str[1] == s[i][1]){
            tu = true;
            break;
        }
    }
    
    if(tu){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
