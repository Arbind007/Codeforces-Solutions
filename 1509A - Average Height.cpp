#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int x;
        vector<int> even;
        for (int i = 0; i < n; ++i) {
            cin>>x;
            if (x%2==0){
                even.push_back(x);
            } else{
                cout << x << endl;
            }
        }
        for (int i = 0; i < even.size(); ++i) {
            cout<<even[i]<<" ";
        }
        cout<<endl;
    }
