#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int r = n * 2;
  int g = n * 5;
  int b = n * 8;
  int ans = ceil(1.0 * r / k) + ceil(1.0 * g / k) + ceil(1.0 * b / k);
  cout << ans;
  return 0;
}
