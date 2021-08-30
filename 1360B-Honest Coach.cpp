#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        vector <int> v1(m);
        for(auto &i : v1){
            cin >> i;
        }
        sort(v1.begin(),v1.end());
        
        int diff = INT_MAX;
        for(int i=0;i<m-1;i++){
            int temp = v1[i+1] - v1[i];
            
            diff = min(diff, temp);
        }
        cout << diff << endl;
    }
    
    return 0;
}
