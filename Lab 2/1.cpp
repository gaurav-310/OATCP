// BY - Gaurav Tripathi
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin>>n;
    if (n==0) {
        cout<<0;
        return 0;
    }
    vector<ll> v(n);
    for (ll i=0; i<n; i++) cin>>v[i];
    ll res = LLONG_MIN;
    ll dp=1;
    for(ll i=0; i<n; i++) {
        dp *= v[i];
        res = max(res, dp);
        if (v[i]==0)
            dp = 1;
    }
    dp=1;
    for (ll i=n-1; i>=0; i--) {
        dp *= v[i];
        res = max(res, dp);
        if (v[i]==0)
            dp=1;
    }
    cout<<res;
    return 0;
}
