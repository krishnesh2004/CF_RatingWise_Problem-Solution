#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;
/////Created By Krishnesh Tiwari
 
// Solution Function
void DEKHO_TRY_KARO() {
   // Your solution code here
   int n;
   cin>>n;
   string s;
   cin>>s;
   char a = s[0];
   char b  = s[n-1];
   unordered_map<char,int>mpp;
   for (int i=0;i<n;i++)
   {
      mpp[s[i]]++;
   }
   bool found = false;
   for (int i=1;i<s.size()-1;i++)
   {
       if(mpp[s[i]]>=2)
       {
           found = true;
           break;
       }
   }
   if(found == true)
   {
      cout<<"Yes"<<endl;
   }
   else{
     cout<<"No"<<endl;
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