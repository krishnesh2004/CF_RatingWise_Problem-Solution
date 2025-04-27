#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t ;
      cin>>t;
      while(t--)
      {
          int n ;
          cin>>n;
          int arr[n];
          for (int i=0;i<n;i++)
          {
              cin>>arr[i];
          }
          int countminus = 0;
          int countplus = 0;
           for (int i=0;i<n;i++)
           {
              if(arr[i]<0)
              {
                  countminus++;
              }
              else{
                countplus++;
              }
           }
           int count =0;
           while(countplus<countminus || countminus%2 !=0)
           {
              count ++;
              countplus++;
              countminus--;
           }
           cout<<count<<endl;
      }
}