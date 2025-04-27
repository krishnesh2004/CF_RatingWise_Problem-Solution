#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin>>t;
      while (t--)
      {
          int n;
          cin>>n;
          string s;
          cin>>s;
          int countleft =0,countright=0 , maxi1= 0,maxi2= 0;
          for (auto it :s)
          {
               if(it=='<')
               {
                 countright=0;
                 countleft++;
                 maxi1 = max(maxi1,countleft);
               }
               else{
                  countleft =0;
                  countright++;
                   maxi2 = max(maxi2,countright);
               }
          }
          int ans = max(maxi1,maxi2);
          cout<<ans+1<<endl;
      }
      
}