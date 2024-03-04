#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    if (n > a * b) {
        cout << -1 << endl;
        return 0;
    }

    vector<vector<int>> hall(a, vector<int>(b, 0));
    int idx = 1, party = 1;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            if (idx <= n) {
                if (idx % 2 == party) hall[i][j] = idx++;
                else --j;
            }
            party = 1 - party;
        }
        if (b % 2 == 0) party = 1 - party;
    }

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cout << hall[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
