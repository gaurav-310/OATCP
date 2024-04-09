// BY - Gaurav Tripathi
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin>>n;
    if(n<=0) {
        if(n==1) {
            ll x;
            cin>>x;
        }
        cout<<0;
        return 0;
    }
    vector<ll> nums(n);
    for(ll i=0; i<n; i++) cin>>nums[i];
    vector<ll> dp(n, 0);
    ll sum=0;
    for(ll i=0; i<n; i++){
        sum += nums[i];
        dp[0] += (i*nums[i]);
    }
    ll ans=dp[0], idx=n-1;
    for(ll i=1; i<n; i++){
        dp[i] = sum + dp[i-1]-(n*nums[idx]);
        --idx;
        ans=max(dp[i],ans);
    }
    cout<<ans;
    return 0;
}
