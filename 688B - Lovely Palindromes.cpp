#include <iostream>
using namespace std;
int main() {
    string a;
    cin >> a;
    for (int i = a.size() - 1; i >= 0; i--) {
        a += a[i];
    }
    cout << a;
}