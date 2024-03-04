#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned int input = 0, count = 0;

    while(input == 0) {
        cin >> input;
        count++;
    }

    int row = (count + 5 - 1) / 5;
    int col = count % 5 > 0 ? count % 5 : 5;
    int moves = abs(3 - row) + abs(3 - col);

    cout << moves;

    return 0;
}