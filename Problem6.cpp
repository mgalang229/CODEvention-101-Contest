#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int r, c, n;
    cin >> r >> c >> n;
    vector<vector<char>> a(r + 2, vector<char>(c + 2));
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> a[i][j];
        }
    }
    vector<vector<char>> new_a(r + 2, vector<char>(c + 2));
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            new_a[i][j] = 'O';
        }
    }
    vector<vector<char>> new_a2(r + 2, vector<char>(c + 2));
    new_a2 = new_a;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (a[i][j] == 'O') {
                new_a2[i][j] = '.';
                new_a2[i + 1][j] = '.';
                new_a2[i - 1][j] = '.';
                new_a2[i][j + 1] = '.';
                new_a2[i][j - 1] = '.';
            }
        }
    }
    vector<vector<char>> new_a3(r + 2, vector<char>(c + 2));
    new_a3 = new_a;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (new_a2[i][j] == 'O') {
                new_a3[i][j] = '.';
                new_a3[i + 1][j] = '.';
                new_a3[i - 1][j] = '.';
                new_a3[i][j + 1] = '.';
                new_a3[i][j - 1] = '.';
            }
        }
    }
    // print the patterns:
    //for (int i = 1; i <= r; i++) {
        //for (int j = 1; j <= c; j++) {
            //cout << a[i][j];
        //}
        //cout << '\n';
    //}
    //cout << "---\n";
    //for (int i = 1; i <= r; i++) {
        //for (int j = 1; j <= c; j++) {
            //cout << new_a[i][j];
        //}
        //cout << '\n';
    //}
    //cout << "---\n";
    //for (int i = 1; i <= r; i++) {
        //for (int j = 1; j <= c; j++) {
            //cout << new_a2[i][j];
        //}
        //cout << '\n';
    //}
    //cout << "---\n";
    //for (int i = 1; i <= r; i++) {
        //for (int j = 1; j <= c; j++) {
            //cout << new_a3[i][j];
        //}
        //cout << '\n';
    //}
    //cout << "---\n";
    if (n == 1) {
        for (int i = 1; i <= r; i++) {
            for (int j = 1; j <= c; j++) {
                cout << a[i][j];
            }
            cout << '\n';
        }
    } else if (n % 2 == 0) {
        for (int i = 1; i <= r; i++) {
            for (int j = 1; j <= c; j++) {
                cout << new_a[i][j];
            }
            cout << '\n';
        }
    } else {
        n -= 5;
        if (n == 0) {
            for (int i = 1; i <= r; i++) {
                for (int j = 1; j <= c; j++) {
                    cout << new_a3[i][j];
                }
                cout << '\n';
            }
        } else if (n % 4 == 0) {
            for (int i = 1; i <= r; i++) {
                for (int j = 1; j <= c; j++) {
                    cout << new_a3[i][j];
                }
                cout << '\n';
            }
        } else {
            for (int i = 1; i <= r; i++) {
                for (int j = 1; j <= c; j++) {
                    cout << new_a2[i][j];
                }
                cout << '\n';
            }
        }
    }
    return 0;
}
