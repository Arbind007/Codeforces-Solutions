#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, m;
    string s;
    cin >> s;
    int count = 0;
    n = s.length();
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'a')
            count++;
    }
    while(1)
    {
        m = n / 2 + 1;
        if(count >= m) 
            break;
        n--;
    }
    cout << n << endl;
    return 0;
}
