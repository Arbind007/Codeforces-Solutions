#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    while(n--){
        bool flag = true;
       map <char,int> mp;
       int m;
       cin >> m;
       for(int j=0;j<m;j++){
           string str;
           cin >> str;
           for(int i=0;i<str.length();i++){
               mp[str[i]]++;
           }
       }
    //   for(auto i : mp){
    //       cout << i.first << " " << i.second << endl;
    //   }
      for(auto i : mp){
          if(i.second != 0){
              if(i.second % m != 0){
                  flag = false;
                  break;
              }
          }
      }
       
      if(flag){
          cout << "YES" << endl;
      }
      else{
          cout << "NO" << endl;
      }
    }
    return 0;
}
