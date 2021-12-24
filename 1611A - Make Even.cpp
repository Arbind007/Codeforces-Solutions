#include <bits/stdc++.h>
using namespace std;

int solve(){
    string str;
    cin >> str;
    int last = str[str.length() - 1] - '0';
    if(last%2==0)
        return 0;
    int first = str[0] - '0';
    if(first%2 == 0)
        return 1;
    for(int i=1;i<str.length()-1;i++)
        if((str[i] - '0') % 2 == 0)
            return 2;
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cout << solve() << endl;
    }
    return 0;
}
