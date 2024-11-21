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
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
     ll l = 0, r = 0, ans = 0;
    map<int,int> mp;
    while (r<n)
    {

         mp[v[r]]++;
         while(mp.size()>k){
           mp[v[l]]--;
            if(mp[v[l]]==0) mp.erase(v[l]);
           l++;
         }
          ans+=r-l+1;
          
        r++;
    }
    cout<<ans<<endl;
}