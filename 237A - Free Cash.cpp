#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, m, h0, m0, c(1), cash(1);
    cin >> n;
    cin >> h0 >> m0;

    while (--n)
    {
        cin >> h >> m;
        if (h == h0 && m == m0) //customer entering at same time
        {
            c++;                //counting the customer
            if (c > cash)       //if count exceed the assigned serving person
            {
                cash = c;
            }
        }
        else
        {
            c = 1;
        }
        h0 = h;
        m0 = m;
    }
    cout << cash;
    return 0;
}
