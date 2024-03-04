#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef long double LD;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;
typedef pair<double, double> PDD;
typedef pair<string, string> PSS;
typedef vector<LL> VLL;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef vector<vector<LL>> VVLL;
typedef vector<vector<PLL>> VVPLL;
typedef vector<PLL> VPLL;
typedef vector<PII> VPII;
#define FORN(s, n) for (int i = s; i < n; ++i)
#define FORNE(s, n) for (int i = s; i <= n; ++i)
#define FORNSQ(s, n) for (int i = s; i * i <= n; ++i)
#define RFORN(s, n) for (int i = s; i > n; --i)
#define RFORNE(s, n) for (int i = s; i >= n; --i)
#define NL "\n"
#define mp make_pair
#define eb emplace_back
#define fi first
#define se second
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ALL(v) (v).begin(), (v).end()
#define SORT(v) sort(ALL(v))
#define SZ(v) ((int)(v).size())

int main()
{
    fast_cin();
    int t;
    cin >> t;
    FORN(0, t)
    {
        int n;
        cin >> n;

        long prev = 0;
        string answer;
        FORN(0, n)
        {
            string s;
            cin >> s;
            int si = stol(s);
            if (si > 0)
            {
                if (prev == 0)
                {
                    prev = si;
                }

                else if (si != prev)
                {
                    answer = "TRIANGLE";
                    prev = 0;
                }
                else if (si == prev)
                {
                    answer = "SQUARE";
                    prev = 0;
                }
            }
        }
        cout << answer << NL;
        answer = "";
    }
    return 0;
}