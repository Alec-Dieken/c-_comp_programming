#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int n, m, k, l, r, t, sm;
char s[400010], ans[400050];
void solve()
{
    scanf("%d %s", &n, s);
    reverse(s, s + n);
    sm = 0;
    for (int i = 0; i < n; ++i)
        sm += s[i] -= '0';
    while (n && !s[n - 1])
        --n;
    for (m = 0, r = 0; m < n || r; ++m)
    {
        r += sm;
        ans[m] = r % 10 + '0';
        r /= 10;
        sm -= s[m];
    }
    reverse(ans, ans + m);
    ans[m] = 0;
    puts(ans);
}
int main()
{
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}