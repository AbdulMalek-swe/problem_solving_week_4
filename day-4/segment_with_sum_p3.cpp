#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     ll n,k;
     cin>>n>>k;
     vector<ll> arr;
     for(int i=0;i<n;i++)
     {
         ll t;
         cin>>t;
         arr.push_back(t);
     }
     int r=0,l=0;
     int ans = 0;
     ll sum = 0;
     while (r<n)
     {
         sum += arr[r];
         if(sum<=k){
           ans+=(r-l+1);
         }else{
            while(sum>k){
                  sum -= arr[l];
                l++;
              
            }
            if(sum<=k){
           ans+=(r-l+1);
         }
         }
         r++;


     }
     cout<<ans<<endl;
    return 0;
}