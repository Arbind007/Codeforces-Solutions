#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b,c,sum=0;
    cin >> a >> b >> c;
    if(a>b)
        swap(a,b);  //swapping so that we visit the shop with least distance
    sum += a;
    sum += min(c,a+b); //min distance between shop1 and shop2
    sum += min(b,c+a); //min distance between shop2 and home
    cout << sum;
    return 0;
}
   
