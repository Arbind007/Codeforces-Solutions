#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_map<int,int> ump;
    vector <int> v(n),ans;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=n-1;i>=0;i--){
        if(ump[v[i]] == 0){
            ans.push_back(v[i]);
            ump[v[i]] = 1;
        }
    }
    cout << ans.size() << endl;
    for(int i=ans.size()-1;i>=0;i--){
        cout << ans[i] << " ";
    }
    return 0;
}

