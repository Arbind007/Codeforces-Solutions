#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    bool tu = true;
    cin >> n;
    vector <vector <int>> v;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    
    sort(v.begin(), v.end(),[&](vector <int> &a,vector <int> &b){
        return a[1] < b[1];
    });
    
    
     
    for(int j=0;j<n-1;j++){
        if(v[j][0] > v[j+1][0]){
            tu = false;
            break;
        }
    }
    
    if(tu){
        cout << "Poor Alex";
    }
    else{
        cout << "Happy Alex";
    }
    
    return 0;
}
