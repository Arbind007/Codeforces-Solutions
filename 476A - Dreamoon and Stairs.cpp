#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int sum = (a+1)/2;
    
    while( sum % b != 0){
        sum++;
    }
    
    if(sum <= a){
    cout << sum << endl;
    }
    else{
       cout << - 1 << endl;
    }
    return 0;
}
