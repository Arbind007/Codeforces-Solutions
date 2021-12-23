#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i=0,j=0;
    string s;
    cin >> n >> s;
    while(i<n){
        cout << s[i];
        i=i+j;
        i++;
        j++;
    }
}

