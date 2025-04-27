#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;
/////Created By Krishnesh Tiwari
 
// Solution Function
void DEKHO_TRY_KARO() {
   // Your solution code here
    int n , k;
    cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i++)
    {
         cin>>arr[i];
    }
    int mini = INT_MAX;
    int even = 0;
    for (auto it : arr)
    {
        if(it%k ==0)
        {
            cout<<0<<endl;
            return;
        }
        if(it%2 ==0)
        {
            even++;
        }
        mini = min(mini,(k-(it%k)));
    }
    if(k==4)
    {
         if(even ==0)
         {
             mini = min(mini,2);
         }
         else if(even ==1)
         {
            mini = min(mini,1);
         }
         else{
            mini = min(mini,0);
         }
    }
    cout<<mini<<endl;
}

// Main Function
int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) DEKHO_TRY_KARO();
    return 0;
}