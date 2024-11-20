#include <bits/stdc++.h>
using namespace std;
#define ln endl
 #define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
   FASTIO;
   int n;
   long long k;
   cin >> n >> k;
   vector<int> a;
   for (int i = 0; i < n; i++)
   {
      int x;
      cin >> x;
      a.push_back(x);
   }
  long long int l = 0, r = 0, ans = 0;
   long long int sum = 0;
   while (r < n)
   {
       sum+=a[r];
       while(sum>=k){
         ans+=n-r;
         sum-=a[l];
         l++;
       }
      r++;
   }
  cout << ans << '\n';
   return 0;
}