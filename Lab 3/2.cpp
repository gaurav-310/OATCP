// BY - Gaurav Tripathi
#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> string_to_vector(string& s) {
    vector<ll> v;
    string num;
    for(char c: s) {
        if(c==',' or c==' ') {
            v.push_back(stoll(num));
            num = "";
        }
        else
            num += c;
    }
    v.push_back(stoll(num));
    return v;
}

string LargestNumber(vector<ll>& inputs) {
    ll n = inputs.size();
    vector<string> v;
    for(ll i=0; i<n; i++)
        v.push_back(to_string(inputs[i]));
    sort(v.begin(), v.end(), [](string a, string b) {
        return (a+b) > (b+a);
    });
    string ans = "";
    for(ll i=0; i<n; i++)
        ans += v[i];
    return ans;

}

int main() {
    string s;
    getline(cin, s);
    vector<ll> inputs = string_to_vector(s);
    string ans = LargestNumber(inputs);
    cout<<ans<<endl;
    return 0;
}
