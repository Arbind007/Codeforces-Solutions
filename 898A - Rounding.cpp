#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int mod = n % 10;
    if(mod <= 5)
        n -= mod;
    else
        n += (10 - mod);
    cout<<n<<endl;
    return 0;
}
