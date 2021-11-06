#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    
    while(n--){
        map <char,int> mp;
        string str;
        cin >> str;
        
        for(int i=0;i<str.length();i++){
          
            mp[str[i]]++;
        }
        
        if(mp['A'] + mp['C'] == mp['B']){
            cout << "YES" << endl;
        } 
        else{
            cout << "NO" << endl;
        }
    
    }
     
    
    return 0;
}
