#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin >> n;
    vector <int> v(n);
    for(auto &i:v)
        cin >> i;
    sort(v.begin(),v.end()); 
    // for(auto &i:v)
    //     cout << i << endl;
    for(int i=0;i<n-1;i++)
        if(v[i+1] - v[i] != 1)
            count += v[i+1] - v[i] -1;
    cout << count << endl;
    return 0;
}
