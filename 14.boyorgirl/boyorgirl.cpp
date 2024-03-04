#include <iostream>
#include <set>
using namespace std;

int main() {
    string u;
    cin >> u;
    set<char> d(u.begin(), u.end());
    cout << ((d.size() % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}
