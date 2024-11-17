#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int r,c;
   cin >> r >> c;
   if(r-c<18){
    cout<<"CSK";
   }else{
    cout<<"RCB";
   }
   return 0;
}