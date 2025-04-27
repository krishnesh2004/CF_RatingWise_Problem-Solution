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
   int arr[n];
   for (int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   int count_0 =0;
   int count_1 = 0;
   for (auto it : arr)
   {
     if(it==0)
     {
         count_0++;
     }
     else{
         count_1++;
     }
   }
   if(count_0 == n || count_1 ==n)
   {
     cout<<"YES"<<endl;
   }
   for (int i=1;i<n;i++)
   {
       if((arr[i]==1 && arr[i-1]==0 ) || (arr[i]==0 && arr[i-1]==1))
       {
          continue;
       }
       else{
        cout<<"NO"<<endl;
       }
   }
   cout<<"YES"<<endl;
}

// Main Function
int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) DEKHO_TRY_KARO();
    return 0;
}