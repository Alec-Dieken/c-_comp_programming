#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    int x = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string exe;
        cin >> exe;

        if (exe[0] == '+' || exe[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    cout << x;
    return 0;
}