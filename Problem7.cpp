#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // *Wrong* Solution
    long long m, w, p, n;
    cin >> m >> w >> p >> n;
    int cnt = 1;
    long long prev = 0;
    while (m * w < n) {
        long long candies = m * w;
        candies += prev;
        long long pp = candies / p;
        if (m == w) {
            pp /= 2;
            m += pp;
            w += pp;
        } else if (m < w) {
            m += pp;
        } else {
            w += pp;
        }
        prev = candies - pp;
        cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
