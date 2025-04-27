#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;
/////Created By Krishnesh Tiwari
 
// Solution Function
void DEKHO_TRY_KARO() {
   // Your solution code here
   int n ;
   cin>>n;
   int a[n];
   for (int i=0;i<n;i++)
   {
      cin>>a[i];
   }
   unordered_set<int> hs1, hs2;
   hs1.insert(a[0]);
  int ans = 1;
    for (int i = 1; i < n; ++i) {
        if (hs1.find(a[i]) !=  hs1.end()) {
            hs1.erase(a[i]);
            hs2.insert(a[i]);
        } else {
            hs2.insert(a[i]);
        }

        if (hs1.empty()) {
            ans++;
            hs1 = hs2;
            hs2.clear();
        }
    }
    cout<<ans<<endl;
}

// Main Function
int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) DEKHO_TRY_KARO();
    return 0;
}