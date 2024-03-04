#include <bits/stdc++.h>
#include <set>

using namespace std;

#define FORN(s, n) for(int i = s; i < n; ++i)
#define NL "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    fast_cin();
    int t; cin >> t;
    int mask = 0x7FFFFFFF;
    
    FORN(0, t) {
        
        int n; cin >> n;
        set<int> op;
        int groups = 0;
        FORN(0, n) {
            int a;
            cin >> a;
            if(op.find((a ^ mask)) == op.end()) {
                ++groups;
                op.insert(a);
            }
        }
        cout << groups << NL;
    }
    return 0;
}