#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    string s;
    cin >> n >> s >> k;
    for (int i = 0; i < (int) s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int tmp = (int) (s[i] - 'a');
            tmp += k;
            tmp %= 26;
            tmp += 97;
            s[i] = (char) tmp;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            int tmp = (int) (s[i] - 'A');
            tmp += k;
            tmp %= 26;
            tmp += 65;
            s[i] = (char) tmp;
        }
    }
    cout << s << '\n';
    return 0;
}
