#include <bits/stdc++.h>
using namespace std;

int main(){
 unordered_map <string,int> mp;
 int n;
 cin >> n;
 while(n--){
     string str;
     cin >> str;
     mp[str]++;
 }
 string ans;
 int mx = INT_MIN;
 for(auto i : mp){
     if( i.second > mx){
         mx = i.second;
         ans = i.first;
     }
 }
 
 cout << ans << endl;
 return 0;
}

// 10 
// 1 2 5 10 20 50 100 200 500 2000
// 350
