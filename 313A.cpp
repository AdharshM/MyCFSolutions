#pragma GCC Optimize("Ofast")
#include <bits/stdc++.h>
 
using namespace std;
 
#define F first
#define S second
#define MOD 1e9 + 7
#define bg begin()
#define ed end()
#define sz size()
#define len length()
#define vi vector<int>
#define pai pair<int, int>
#define sett set<int>
#define umpi unordered_map<int, int>
#define vpair vector<pair<int, int>>
 
typedef unsigned long long int ull;
typedef long long int lli;
typedef long int li;
 
namespace comp {
bool compasc1(const pair<int, int> &a, const pair<int, int> &b) {
  return a.F < b.F;
}
bool compasc2(const pair<int, int> &a, const pair<int, int> &b) {
  return a.S < b.S;
}
bool compdsc1(const pair<int, int> &a, const pair<int, int> &b) {
  return a.F > b.F;
}
bool compdsc2(const pair<int, int> &a, const pair<int, int> &b) {
  return a.S > b.S;
}
} // namespace comp
namespace Fastio {
void fastio() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
}
} // namespace Fastio
using namespace comp;
using namespace Fastio; 
int main() {
  Fastio::fastio();
  li  n;
  cin >> n;
  if (n > 0)
    cout << n << endl;
  else {
    cout << max(n / 10, (n % 10) + (n / 100) * 10) << endl;
  }
  return 0;
}
