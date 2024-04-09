// BY - Gaurav Tripathi
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void obtainInputs(string& s, vector<ll>& inputs) {
    int n = s.length();
    int num;
    for(int i=0; i<n; i++) {
        num = 0;
        while(i<n && s[i] != ' ') {
            num = num*10 + (s[i]-'0');
            i++;
        }
        inputs.push_back(num);
    }
}

ll solve(vector<ll>& nums, ll n) {
    ll res=0, i=0, curr_sum=0;
    ll sz=nums.size();
    while(curr_sum<n) {
        if(i<sz && nums[i]<=curr_sum+1) {
            curr_sum+=nums[i];
            i++;
        }
        else {
            curr_sum+=curr_sum+1;
            res++;
        }
    }
    return res;
}

int main() {
    string s;
    getline(cin, s);
    vector<ll> nums;
    obtainInputs(s, nums);
    ll n;
    cin>>n;
    cout<<solve(nums, n);
    return 0;
}
