// BY - Gaurav Tripathi
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(string& v, ll k) {
    stack<char> st;
    string res;
    ll n = v.length();
    for(int i=0; i<n; i++) {
        while(!st.empty() && st.top()>v[i] && k>0) {
            st.pop();
            k--;
        }
        if(st.empty() && v[i] == '0')
            continue;
        st.push(v[i]);
    }
    while(!st.empty() && k > 0) {
        st.pop();
        k--;
    }
    while(!st.empty()) {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(), res.end());
    cout<<res;
}

signed main() {
    string v;
    cin>>v;
    ll k;
    cin>>k;
    if(k==v.length()) {
        cout<<0;
    }
    else {
        solve(v, k);
    }
    return 0;
}
