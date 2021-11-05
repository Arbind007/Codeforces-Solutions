#include <iostream>
using namespace std;
 
int isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            return false;
        }
    }
    
    return true;
}
 
int main(){
    int a,b;
    cin >> a >> b;
    bool tu = true;
    for(int i=a+1;i<b;i++){
        if(isPrime(i) == 1){
            tu = false;
        }
    }
    
    if(tu and isPrime(b)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    
    return 0;
}
