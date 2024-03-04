#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    if(n>=m) {
        cout << n - m;
        return 0;
    }else{
        int c = 0;
        while(m>n){
            if(m&1){
                ++m;
                ++c;
            } else {
                m /= 2;
                ++c;
            }
        }
        cout << c + (n - m);
        return 0;
    }
}