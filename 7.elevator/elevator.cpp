#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string door;
    int rail;

    cin >> door >> rail;

    if((door == "front" && rail == 1) || (door == "back" && rail == 2)) {
        cout << "L";
    } else {
        cout << "R";
    }

    return 0;
}