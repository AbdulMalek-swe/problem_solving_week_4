#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  while(n--){
    int k;
    cin>>k;
    string t;
    cin >> t;
    int r=k-1;
    int n=6;
     vector<int>v;
    while(0<=r){
      if(t[r]=='0'){
            // cout<<t[r-2]<<t[r-1];
             string st = string(1, t[r - 2]) + string(1, t[r - 1]);
           v.push_back(stoi(st));
             r=r-3;
      }else if(t[r]!=0){
        // cout<<t[r];
         v.push_back(t[r]-'0');
          r--;
      } 
    }
   for (auto it = v.rbegin(); it != v.rend(); it++) {
      // cout << *it <<endl;
      char ch = 96+*it;
      cout<<ch;
    }
    cout<<endl;
  }
    
    return 0;
}
