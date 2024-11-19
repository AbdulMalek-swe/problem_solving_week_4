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
        ll a,b,c;
        cin >> a >> b >> c;
        ll ans1 = abs(a - 1);
        ll ans2 = abs(b - c) + abs(c - 1);
        if (ans1 < ans2)
        {
            cout << 1 << "\n";
        }
        else if(ans1>ans2){
            cout << 2 << "\n";
        }else{
            cout << 3 << "\n";
        }
    }

    return 0;
}