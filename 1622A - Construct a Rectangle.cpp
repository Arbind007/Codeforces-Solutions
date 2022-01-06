#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        vector <int> v(3);
        for(auto &it:v)
            cin >> it;
        sort(v.begin(),v.end());
        if(v[0]+v[1] == v[2])
            cout << "YES" << endl;
        else if(v[0] == v[1] && v[2] % 2 == 0)
            cout << "YES" << endl;
        else if(v[1] == v[2] && v[0] % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
