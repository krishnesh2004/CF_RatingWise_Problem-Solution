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
   int diff = arr[1]-arr[0];
   for (int i=2;i<n;i++)
   {
      if((arr[i]-arr[i-1]) !=diff)
      {
          cout<<"NO"<<endl;
          return ;
      }
   }
   int pp = arr[0] - diff;
    int ss = n + 1;
    int y = pp / ss;
    int x = diff + y;
    if (pp < 0 || pp % ss != 0) {
        cout << "NO" << endl;
        return;
    }
    if (x >= 0 && y >= 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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