#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;

    while (n--)
    {
        ll x,y,z;
         cin >> x >> y >> z;
             vector<ll> arr;
             for(int i = 0; i < z; i++){
                 ll temp;
                 cin >> temp;
                 arr.push_back(temp);
             }
             ll ans =0;
              for(int i = 0; i < z; i++){
                 ll temp = arr[i]+1;
                  ans+=min(x,temp);
              }
              cout << y+ans-1 << "\n";
    }
    
    return 0;
}