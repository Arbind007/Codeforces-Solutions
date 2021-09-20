#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int counta = 0,countb = 0;
        while(n--){
            int a;
            cin >> a;
            if(a == 1){
                counta++;
            }
            else{
                countb++;
            }
        }
        
        if(counta % 2 == 0 && countb % 2 == 0){
            cout << "YES" << endl;
            continue;
        }
      
        if(counta % 2 == 0 && counta >= 2){
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    
    return 0;
}
