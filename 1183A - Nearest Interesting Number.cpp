#include <bits/stdc++.h>
using namespace std;
 
int sum(int n){
    int sum=0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}
 
void helper(int n){
    if(sum(n) % 4 == 0){
        cout << n << endl;
        return;
    }
    helper(n+1);
}
 
int main(){
    int n;
    cin >> n;
    helper(n);
    return 0;
}
