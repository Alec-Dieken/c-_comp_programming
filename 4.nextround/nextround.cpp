#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    cin >> k;

    int total = 0;
    int toBeat;
    for(int i = 1; i <= n; i++) {
        int score;
        cin >> score;
        if(i < k && score > 0) {
            total++;
        } else if(i == k && score > 0) {
            toBeat = score;
            total++;
        } else if(i > k && score >= toBeat) {
            total++;
        }
    }

    cout << total;

    return 0;
}