#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t ;
      cin>>t;
      while(t--)
      {
          int n , k;
          cin>>n>>k;
          string s ;
          cin>>s;
          unordered_map<char,int>mpp;
          for (int i=0;i<n;i++)
          {
              mpp[s[i]]++;
          }
          int countodd = 0;
          for (auto it : mpp)
          {
              if(it.second%2 !=0)
              {
                  countodd+= it.second%2;
              }
          }
          if(s.size()==1)
          {
              cout<<"YES"<<endl;
              continue;
          }
          countodd = countodd-1;
          if(countodd <= k)
          {
              cout<<"YES"<<endl;
          }
          else{
             cout<<"NO"<<endl;
          }
      }
}