#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    double l;
    cin >> n >> l;

    vector<double> lanterns(n);
    for (auto &lantern : lanterns) cin >> lantern;
    sort(lanterns.begin(), lanterns.end());

    double maxDistance = max(lanterns[0], l - lanterns[n - 1]) * 2;
    for (int i = 1; i < n; ++i) {
        maxDistance = max(maxDistance, lanterns[i] - lanterns[i - 1]);
    }

    cout << fixed << setprecision(10) << maxDistance / 2.0;
    return 0;
}
