#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;
/////Created By Krishnesh Tiwari
 
// Solution Function
void DEKHO_TRY_KARO() {
   // Your solution code here
   int n , x;
   cin>>n>>x;
   int arr[n];
   for (int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   int starti =0;
   int endi = 0;
   for (int i=0;i<n;i++)
   {
     if(arr[i]==1)
     {
          starti = i+1;
          break;
     }
   }
   for (int i=n-1;i>=0;i--)
   {
     if(arr[i]==1)
     {
          endi = i+1;
          break;
     }
   }
   int diff = (endi-starti+1);
   if(diff<=x)
   {
      cout<<"YES"<<endl;
   }
   else{
     cout<<"NO"<<endl;
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