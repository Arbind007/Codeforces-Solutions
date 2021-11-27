#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b;
    cin >> a >> b;
    long long left = b;
    long long distress = 0;
    
    for(int i=0;i<a;i++){
        char c;
        long long d;
        cin >> c >> d;
        if(c == '+'){
            left += d;
        }
        else if(c == '-'){
            if(left - d >= 0){
                left = left - d;
            }
            else{
                distress++;
            }
        }
    }
    
    cout << left << " " << distress;
    return 0;
}
