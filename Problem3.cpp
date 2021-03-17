#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    string special_chars = "!@#$%^&*()-+";
    bool six = ((int) s.size() >= 6 ? true : false);
    bool one_digit = false;
    bool lowercase = false;
    bool uppercase = false;
    bool special = false;
    for (int i = 0; i < n; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            one_digit = true;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            lowercase = true;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            uppercase = true;
        } else {
            for (char c : special_chars) {
                if (s[i] == c) {
                    special = true;
                    break;
                }
            }
        }
    }
    int ans = 0;
    if (!one_digit) {
        ans++;
    }
    if (!lowercase) {
        ans++;
    }
    if (!uppercase) {
        ans++;
    }
    if (!special) {
        ans++;
    }
    if (!six) {
        ans = max(ans, 6 - (int) s.size());
    }
    cout << ans << '\n';
   
