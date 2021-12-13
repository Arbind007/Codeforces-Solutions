#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
string s = to_string(n);
int m = s.size();
int i=0;
bool flag = true;
while(i<m){
   if(s[i] == '1' && s[i+1] == '4' && s[i+2] == '4'){
       i+=3;
   } 
   else if(s[i] == '1' && s[i+1] == '4'){
       i+=2;
   }
   else if(s[i] == '1'){
       i++;
   }
   else{
       flag = false;
       break;
   }
}
if(flag){
    cout << "YES";
}
else{
    cout << "NO";
}
return 0;
}
