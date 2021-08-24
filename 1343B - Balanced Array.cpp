#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        if((a / 2) % 2 == 0){
           cout << "YES" << endl;
           for(int j = 1 ; j <= a ; j++){
               if(j % 2 == 0 ){
                   cout << j << " ";
               }
           }
           for(int j = 1 ; j < a ; j++){
               if(j % 2 == 1 && j == a-1){
                   cout << j+(a/2) << " ";
               }
               else if(j % 2 == 1 ){
                   cout << j << " ";
               }
           }
           cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }


    return 0;
}
