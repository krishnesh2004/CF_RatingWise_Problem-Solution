#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    /// take input 
    cin>>t;
    while(t--){
        long long  n,k;
        cin>>n>>k;
        vector<long long > v(n);
        for (int i=0;i<n;i++)
        {
             cin>>v[i];
        }
        vector<long long >cpy = v;
        sort(cpy.begin(),cpy.end());
        if(cpy == v  || k>1)
        {
          cout<<"YES"<<endl;
        }
        else
        {
           cout<<"NO"<<endl;
        }
    }
    return 0;
}