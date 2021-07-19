#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int suma = 0;
    int sumb = 0;
    int count = 0;
    int m = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sumb += a[i];
    }
    sort(a, a + n, greater<int>());
    while (!(suma > sumb))
    {
        suma += a[m];
        sumb -= a[m];
        m++;
        count++;
    }
    cout << count << endl;
    return 0;
}
