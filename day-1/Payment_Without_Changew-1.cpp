#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
     {
       ll a,b,n,s;
        cin >> a >> b >> n >> s;
        ll sum = 0;
          ll mn = min(a,s/n);
          ll v = mn*n;
          if(v+b>=s){
            cout<<"YES"<<endl;
          }else{
            cout<<"NO"<<endl;
          }
     } 
    return 0;
}