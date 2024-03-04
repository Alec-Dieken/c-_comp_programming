#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string leader;
    int maxPoints = 0;

    for (int i = 0; i < n; i++)
    {
        string handle;
        int currPoints, plus, minus, a, b, c, d, e;

        cin >> handle >> plus >> minus >> a >> b >> c >> d >> e;
        currPoints = (100 * plus) - (50 * minus) + a + b + c + d + e;

        if (currPoints > maxPoints || i == 0)
        {
            leader = handle;
            maxPoints = currPoints;
        }
    }

    cout << leader;

    return 0;
}