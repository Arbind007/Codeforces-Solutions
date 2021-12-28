#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a(n);
    for(auto& it:a)
        cin >> it;
    sort(a.begin(),a.end());
    int count=0,maxcount=0;
    for(int i=0;i<n-1;i++){
        if(a[i] != a[i+1]){
            maxcount=max(maxcount,count);
            count = 0;
            continue;
        }
        count++;
    }
    maxcount=max(maxcount,count);
    cout << maxcount+1;
    return 0;
}
