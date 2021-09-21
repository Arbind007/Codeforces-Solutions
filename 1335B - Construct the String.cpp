#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        char c[]="abcdefghijklmnopqrstuvwxyz";
        string str;
        int k =0;
        cin >> n >> a >> b;
        for(int i=0;i<b;i++){
            str[i] = c[i];
        }
        while(n--){
            cout << str[k];
            k++;
            if(k==b){
                k = 0;
            }
        }
        cout << endl;
    }
    
    return 0;
}
