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
   int n ;
   cin>>n;
   vector<int>arr1(n),arr2(n);
   for (int i=0;i<n;i++)
   {
      cin>>arr1[i];
      cin>>arr2[i];
   }
//    for (int i=0;i<n;i++)
//    {
//       cin>>arr2[i];
//    }
   vector<int>maxi1(2*n+1,0);
   vector<int>maxi2(2*n+1,0);
   int count1 = 1;
   int count2 = 1;
   for (int i=1;i<n;i++)
   {
      if(arr1[i] == arr1[i-1])
      {
          count1 ++;
      }
      else{
          maxi1[arr1[i-1]] = max(maxi1[arr1[i-1]],count1);
          count1 =1;
      }
   }
   maxi1[arr1[n-1]] = max(maxi1[arr1[n-1]],count1);
   for (int i=1;i<n;i++)
   {
      if(arr2[i] == arr2[i-1])
      {
          count2 ++;
      }
      else{
          maxi2[arr2[i-1]] = max(maxi2[arr2[i-1]],count2);
          count2 =1;
      }
   }
   maxi2[arr2[n-1]] = max(maxi2[arr2[n-1]],count2);
   int maxi = INT_MIN;
   for (int i=1;i<=2*n;i++)
   {
       maxi = max(maxi,(maxi1[i]+maxi2[i]));
   }
   cout<<maxi<<endl;
}

// Main Function
int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) DEKHO_TRY_KARO();
    return 0;
}

