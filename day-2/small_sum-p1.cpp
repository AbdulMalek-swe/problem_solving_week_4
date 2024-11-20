#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, s;
    cin >> n >> s;
    vector<ll> arr;
    ll t=n;
    while (t--)
    {
        ll x;
        cin >> x;
        arr.push_back(x);
    }
    ll l = 0;
   ll r = 0;
    ll sum = 0;
    ll ans = 0;
    while (r<n)
    {
        sum += arr[r];
         
        if (sum <= s)
        {
            ans = max(ans, r - l + 1);
        }else{
            sum =sum-arr[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}