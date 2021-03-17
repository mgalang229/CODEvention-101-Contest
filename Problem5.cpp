#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int h, m;
    cin >> h >> m;
    string time = "";
    auto GetNameText = [&](int hour) {
        string hours[] = {"one", "two", "three", "four", "five", "six", "seven",
                                         "eight", "nine", "ten", "eleven", "twelve", "thirteen",
                                         "fourteen", "quarter", "sixteen", "seventeen", "eighteen",
                                         "nineteen", "twenty", "twenty " + hours[0], "twenty " + hours[1],
                                         "twenty " + hours[2] , "twenty " + hours[3], "twenty " + hours[4],
                                         "twenty " + hours[5], "twenty " + hours[6], "twenty " + hours[7],
                                         "twenty " + hours[8], "half"};
        return hours[hour - 1];
    };
    if (m == 0) {
        cout << GetNameText(h) << " o' clock";
    } else if (m >= 1 && m <= 30) {
        if (GetNameText(m) == "quarter" || GetNameText(m) == "half") {
            cout << GetNameText(m) << " past " << GetNameText(h);
        } else if (GetNameText(m) == "one") {
            cout << GetNameText(m) << " minute past " << GetNameText(h);
        } else {
            cout << GetNameText(m) << " minutes past " << GetNameText(h);
        }
    } else {
        if (GetNameText(60 - m) == "quarter" || GetNameText(60 - m) == "half") {
            cout << GetNameText(60 - m) << " to " << GetNameText(h + 1);
        } else if (GetNameText(60 - m) == "one") {
            cout << GetNameText(60 - m) << " minute to " << GetNameText(h + 1);
        } else {
            cout << GetNameText(60 - m) << " minutes to " << GetNameText(h + 1);
        }
    }
    cout << '\n';
    return 0;
}
