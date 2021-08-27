#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin >> a >> b >> c;
        int s = c % a;
        int re = s + (a - b);
        
        if(s < b){
           cout << c - re << endl; 
        }
        else{
            cout << c - (s - b) << endl;
        }
        
        
    }
   
    return 0;
}
