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
     set<ll>s;
   ll  r=0, l=0;
      ll ans =0;
       
      while (r<n)
      {
          s.insert({arr[r]});
       
          if(s.size()<=k){
             ans+=r-l+1;
          }
          else{
              s.clear();
              while(l<r){
                    l++;
                      s.insert({arr[l]});
                if(s.size()<=k){
             ans+=r-l+1;
          }
            
              }
          }
           r++;
      }
      cout<<ans+1;
      
    return 0;
}