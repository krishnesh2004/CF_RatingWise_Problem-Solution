#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;
/////Created By Krishnesh Tiwari
 
// Solution Function
void DEKHO_TRY_KARO() {
   // Your solution code here
   ll n , r;
   cin>>n>>r;
   vector<long long>arr1(n),arr2(n);
   vector<pair<long long,long long>>p(n);
   for (ll i=0;i<n;i++)
   {
       cin>>arr1[i];
   }
   for (ll i=0;i<n;i++)
   {
       cin>>arr2[i];
   }
   for (ll i=0;i<n;i++)
   {
       p[i] = {arr2[i],arr1[i]};
   }
   sort(p.begin(),p.end());
   ll count = 1;
   ll cost = r;
   for (auto it : p)
   {
      ll cost_value = it.first;
      ll share_data = it.second;
      if(cost_value>=r)
      {
          break;
      }
      if(count+share_data>n)
      {
           cost += (n-count)*cost_value;
           count = n ;
           break;
      }
      else{
          cost += (cost_value*share_data);
          count += share_data;
      }
   } 
   cost += (n-count)*r;
   cout<<cost<<endl;
}

// Main Function
int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) DEKHO_TRY_KARO();
    return 0;
}