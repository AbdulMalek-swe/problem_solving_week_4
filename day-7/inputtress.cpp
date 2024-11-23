#include <bits/stdc++.h>
using namespace std;
#define long long int ll;
#define nl "\n"

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n], tree[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        for (ll i = 0; i < n; i++)
            cin >> tree[i];
        ll curr = arr[0];
        ll ans = 0, i = 0, j = 1;
        if (curr <= k)
            ans = 1;
        while (j < n)
        {
            if (tree[j - 1] % tree[j] == 0)
                curr += arr[j];
            else
            {
                curr = arr[j];
                i = j;
            }

            while (curr > k)
            {
                curr -= arr[i++];
            }

            ans = max(ans, j - i + 1);
            j++;
        }

        cout << ans << nl;
    }
    return 0;
}