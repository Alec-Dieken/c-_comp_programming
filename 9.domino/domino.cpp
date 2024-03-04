#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y;
    cin >> x >> y;

    cout << static_cast<int>(floor((x * y) / 2));

    return 0;
}