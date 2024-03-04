// https://codeforces.com/contest/1932/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef long double LD;
typedef pair<int,int> PII;
typedef pair<LL,LL> PLL;
typedef pair<double,double> PDD;
typedef pair<string, string> PSS;
typedef vector<LL> VLL;
typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<vector<LL> > VVLL;
typedef vector<vector<PLL> > VVPLL;
typedef vector<PLL> VPLL;
typedef vector<PII> VPII;
#define FORN(s, n) for(int i = s; i < n; ++i)
#define FORNE(s, n) for(int i = s; i <= n; ++i)
#define FORNSQ(s, n) for(int i = s; i * i <= n; ++i)
#define RFORN(s, n) for(int i = s; i > n; --i)
#define RFORNE(s, n) for(int i = s; i >= n; --i)
#define NL "\n"
#define mp make_pair
#define eb emplace_back
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ALL(v) (v).begin(), (v).end()
#define SORT(v) sort(ALL(v))
#define SZ(v) ((int)(v).size())

int main()
{
    fast_cin();
    int t, n;
    string s;
    cin >> t;
    FORN(0, t) {
        cin >> n >> s;
        int c = 0; int thorns = 0;
        FORN(0, s.length()) {
            if(thorns == 2) break;
            if(s[i] == '@') ++c;
            if(s[i] == '*') {
                ++thorns;
            } else {
                thorns = 0;
            }
        }
        cout << c << NL;
    }
    return 0;
}