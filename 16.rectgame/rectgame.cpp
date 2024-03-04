#include <bits/stdc++.h>
using namespace std;

int solve(int n, int s) {
    if(n == 1) return s;
    for(int i = 2; i * i <= n; ++i) {
        if(n % i == 0) {
            return solve(n / i, s + (n / i));
        }
    }
    return s + 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, points;
    cin >> n;
    points = solve(n, n);
    cout << points;
    return 0;
}