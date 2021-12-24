#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t,m,n,count;
    cin >> t;
    while(t--){
    count=0;
    cin >> m >> n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            char a;
            cin >> a;
            if(i == m-1 && a == 'D')
                count++;
            if(j == n-1 && a == 'R')
                count++;
        }
    }
    cout << count << endl;
    }
    return 0;
}
