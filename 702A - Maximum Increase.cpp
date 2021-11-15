#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n,prev = INT_MIN,sum=0,mxsum=0,count=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        // cout << a << " " << prev << endl;
        if(a > prev){
            sum++;
        }
        else{
            mxsum = max(mxsum,sum);
            sum = 1;
        }
        prev = a;
    }
    mxsum = max(mxsum,sum);
    cout << mxsum << endl;
    
    return 0;
}
