#include <bits/stdc++.h>
#define ll long long int
#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int main()
{
    FASTIO;
     int t;
    cin >> t;
    while (t--){
         int n, k;
    cin >> n >> k;
    vector<ll>v;
    for (int i = 0; i < n; i++){
        ll x;
        cin >> x;
        v.push_back(x);
        v[i] = v[i] + i + 1;
    }
    
    sort(v.begin(), v.end());
    ll sum = 0;
    ll ans = 0;
    for(int i=0;i<n;i++){
    
        if(sum+v[i]>k){
            break;
        }
        sum += v[i];
        ans++;
    }
    cout << ans << endl;
    }
    return 0;
    
}