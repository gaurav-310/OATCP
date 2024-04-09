// BY - Gaurav Tripathi
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, m;
    cin >> n;
    ll a[101];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    ll b[101];
    for (ll i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    ll dp[101][101];
    memset(dp, -1, sizeof(dp));

    for (ll i = n; i >= 0; i--) {
        for (ll j = m; j >= 0; j--) {
            if (i == n || j == m) {
                dp[i][j] = 0;
                continue;
            }
            ll o1 = 0, o2 = 0, o3 = 0;
            if (abs(a[i] - b[j]) <= 1)
                o1 = 1 + dp[i + 1][j + 1];
            o2 = dp[i + 1][j];
            o3 = dp[i][j + 1];
            dp[i][j] = max({o1, o2, o3});
        }
    }

    cout << dp[0][0];
    return 0;
}
