// BY - Gaurav Tripathi
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll main() {
    ll n;
    cin>>n;
    vector<ll> costs(n);
    for(ll i=0; i<n; i++) cin>>costs[i];
    ll init_coins = 0;
    cin>>init_coins;
    sort(costs.begin(), costs.end());
    ll tot_bars = 0;
    for(ll i=0; i<n; i++) {
        if(init_coins < costs[i])
            break;
        else {
            init_coins-=costs[i];
            ++tot_bars;
        }
    }
    cout<<tot_bars;
    return 0;
}
