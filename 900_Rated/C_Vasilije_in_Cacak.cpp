#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t ;
     cin>>t;
     while(t--)
     {
         long long n ,k,x;
         cin>>n>>k>>x;
         // calculate starting sum of n numbers
         long long  sum_first = (k * (k + 1)) / 2;
         // calculate last sum of  n numbers
         long long totalsum = (n*(n+1))/2;
         long long val = n-k;
         long long firstvaluesum = (val*(val+1))/2;
         long long last_sum =  totalsum-firstvaluesum;
         if(x>=sum_first && x<=last_sum)
         {
             cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
     }
}