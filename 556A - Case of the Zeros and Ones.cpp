#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,cn = 0,c = 0;
    string str;
    cin >> n >> str;
    for(int i=0;i<n;i++){
        if(str[i] == '1'){
            cn++;
        }
        else{
            c++;
        }
    }
    if(cn > c){
        cout << cn-c << endl;
    }
    else{
        cout << c-cn << endl;
    }
    return 0;
}
