#include<bits/stdc++.h>
using namespace std;
 
int solve(int len,string s)
{
    int count = 0;
    for (int i = 0; i < len; i++){
        int temp = s[i] - '0';
        if (temp % 2 == 0)
            count += (i + 1);
    }
    return count;
}
 
int main() {
    string s;
    int num;
    cin >> num >> s;
    cout << solve(num,s) << endl;
    return 0;
}
