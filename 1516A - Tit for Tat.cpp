#include <bits/stdc++.h>
using namespace std;

void solve(){
    int num,mov,j=0;
    cin >> num >> mov;
    vector <int> v(num);
    for(auto &i:v)
        cin >> i;
    while(mov--){
        while(j < num-1 && v[j] == 0)
            j++;
        if(j == num-1)
            break;
        v[num-1]++;
        v[j]--;
    }
    for(auto &i:v)
        cout << i << " ";
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}
