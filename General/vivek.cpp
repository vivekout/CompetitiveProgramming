
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
freopen("input.txt", "rt", stdin);
   
  int t; cin >> t;
  for (int it = 0; it < t; it++) {
    int n, k; ll v;
    cin >> n >> k >> v;
    vector<pair<int, string>> a;
    for (int i = 0; i < n; i++) {
      string s; cin >> s;
      a.emplace_back(i, s);
    }
    rotate(a.begin(), a.begin() + (v - 1) * k % n, a.end());
    a.resize(k);
    sort(a.begin(), a.end());
    cout << "Case #" << it + 1 << ":";
    for (auto p : a) {
      cout << " " << p.second;
    }
    cout << '\n';
  }
}

