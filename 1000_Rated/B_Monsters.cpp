#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;
/////Created By Krishnesh Tiwari
 
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
 
// Solution Function
void DEKHO_TRY_KARO() {
   // Your solution code here
   ll n , k;
   cin>>n>>k;
   vector<pair<ll , ll>>arr;

   //// NOW here store the value and the corrusponding index  
   for (int i=0;i<n;i++)
   {
      int x ;
      cin>>x;
      arr.push_back({x,i+1});
   }
   for (int i=0;i<arr.size();i++)
   {
       arr[i].first = arr[i].first%k;
       if(arr[i].first==0)
       {
          arr[i].first = k;
       }
   }
   sort(arr.begin(),arr.end() , [&](pair<ll,ll>a,pair<ll,ll>b)
   {
      if(a.first != b.first)
      {
          return a.first > b.first;
      }
      else
      return  b.second > a.second ;
   });
   for (auto it : arr)
   {
     cout<<it.second<<" ";
   }
   cout<<endl;
}

// Main Function
int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) DEKHO_TRY_KARO();
    return 0;
}
