#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;
/////Created By Krishnesh Tiwari
 
// Solution Function
void DEKHO_TRY_KARO() {
   // Your solution code here
    string s;
    cin>>s;
    int n = s.size();
    int count_0 = 0;
    int count_1 = 0;
    for (auto it : s)
    {
         if(it == '1')
         {
              count_1++;
         }
         else{
            count_0++;
         }
    }
    string p = "";
    for (int i=0;i<n;i++)
    {
          if(s[i]=='0')
          {
              if(count_1>0)
              {
                  p += '1';
                  count_1--;
              }
              else{
                 p += '0';
              }
          }
          else{
             if(count_0>0)
             {
                p += '0';
                count_0--;
             }
             else{
                 p += '1';
             }
          }
    }
    int i=0;
   while(s[i]!=p[i])
   {
      i++;
   }
   cout<<n-i<<endl;
}

// Main Function
int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) DEKHO_TRY_KARO();
    return 0;
}