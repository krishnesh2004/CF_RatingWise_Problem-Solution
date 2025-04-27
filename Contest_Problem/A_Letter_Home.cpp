#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;
/////Created By Krishnesh Tiwari
 
// Solution Function
void DEKHO_TRY_KARO() {
   // Your solution code here
   int n,s ;
   cin>>n>>s;
   vector<int>arr(n);
   for (int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int a = arr[0] , b = arr[n-1];
   int ans = (b-a)+min(abs(s-a),abs(b-s));
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