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

void solve(){
}
int main()
{
    fast_cin();
    string s;
    int nb, ns, nc, pb, ps, pc;
    LL r;
    cin >> s >> nb >> ns >> nc >> pb >> ps >> pc >> r;
    int ib =0, is =0, ic = 0, total = 0, cost;
    FORN(0, s.length()) {
        if(s[i] == 'B') ++ib;
        else if(s[i] == 'S') ++is;
        else ++ic;   
    }
    cost = (ib * pb) + (is * ps) + (ic + ps);
    while(nb >= ib && ns >= is && nc >= ic) {
        ++total;
        nb -= ib; ns -=is; nc -=ic;
        // FINISH CODE
    }
    return 0;
}