#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, res;
    cin >> s;
    vector<int> nums;
    for (char c : s) if (c != '+') nums.push_back(c - '0');
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i) res += to_string(nums[i]) + (i + 1 < nums.size() ? "+" : "");
    cout << res << '\n';
    return 0;
}