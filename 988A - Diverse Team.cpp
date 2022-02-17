#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k;
    cin >> n >> k;
    unordered_map<int, int> mp;
    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        mp[a] = i;
    }
    if(mp.size() < k)
        cout << "NO";
    else{
        cout <<"YES"<<endl;
        for(auto &it:mp)
        {
            cout << (it.second) <<" ";
            if(--k == 0)
            {
                break;
            }
        }
     }
}
