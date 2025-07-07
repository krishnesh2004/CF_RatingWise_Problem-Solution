#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
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
         map<int,int>mpp;
         for(int i=0;i<n;i++)
         {
              mpp[arr[i]]++;
         }
         if(mpp.size()>=3)
         {
              cout<<"No"<<endl;
         }
         else
         {
               int f1 = mpp.begin()->second;
               int f2 = mpp.rbegin()->second;
               if(f1==f2)
               {
                 cout<<"Yes"<<endl;
               }
               else if (n%2 ==1 && abs(f1-f2)==1)
               {
                  cout<<"Yes"<<endl;
               }
               else{
                cout<<"No"<<endl;
               }
         }

     }

}