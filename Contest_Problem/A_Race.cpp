#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;
/////Created By Krishnesh Tiwari
 
// Solution Function
void DEKHO_TRY_KARO() {
   // Your solution code here
   int a , x , y;
   cin>>a>>x>>y;
   int aa = abs(a-x);
   int bb = abs(a-y);
   bool found = true;
   for (int i=1;i<101;i++)
   {
      if(i==a)
      {
           continue;
      }
      if(abs(i-x)<aa && abs(i-y)<bb)
      {
          found = false;
          break;
      }
   }
   if(found==true)
   {
      cout<<"NO"<<endl;
   }
   else{
     cout<<"YES"<<endl;
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