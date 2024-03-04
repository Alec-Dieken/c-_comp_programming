// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> VI;
#define FORN(s, n) for(int i = s; i < n; ++i)
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int main() {
    fast_cin();
    int n, t;
    cin >> n >> t;
    VI a(n);
    for (auto &e : a) cin >> e;

    int m = 0, c = 0;
    int j = 0;
    FORN(0, n) {
        while (j < n && c + a[j] <= t) {
            c += a[j];
            ++j;
        }
        m = max(m, j - i);
        c -= a[i];
    }
    cout << m;
    return 0;
}