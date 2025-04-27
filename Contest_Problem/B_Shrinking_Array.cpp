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
   vector<int>arr(n);
   for (int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   bool found = false;
   int diff = INT_MAX;
   for (int i=0;i<n;i++)
   {
        diff = min(diff,abs(arr[i]-arr[i-1]));
   }
   if(diff<=1)
   {
      cout<<0<<endl;
      return;
   }
   for (int i=1;i<n-1;i++)
   {
        if((arr[i-1]<= arr[i] && arr[i]>=arr[i+1]) || (arr[i-1]>= arr[i] && arr[i]<=arr[i+1]))
        {
              found = true;
        }
   }
   if(found == true)
   {

       cout<<1<<endl;
   }
   else{
    cout<<-1<<endl;
   }
}

// Main Function
int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) DEKHO_TRY_KARO();
    return 0;
}