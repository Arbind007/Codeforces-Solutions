#include <iostream>
using namespace std;

int solve(int a, int b, int c, int d){
    int n = min(a,min(c,d));
    a -= n;
    int m = min(a,b);
    return 256*n + 32*m;
}

int main(){
    int n;
    n = 1;
    while(n--){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << solve(a,b,c,d) << endl;
    }
    return 0;
}
