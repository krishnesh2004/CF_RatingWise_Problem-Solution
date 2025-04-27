#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
          int n;
          cin>>n;
          vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        vector<long long> prifx(n + 1, 0);
        prifx[1] = a[1];
        for (int i = 2; i <= n; i++) {
            prifx[i] = max(prifx[i - 1], a[i]);
        }
        vector<long long> suffix(n + 1, 0);
        for (int j = 1; j <= n; j++) {
            suffix[j] = suffix[j - 1] + a[n - j + 1];
        }
        vector<long long> ans(n + 1);
        for (int p = 1; p <= n; p++) {
            long long unique = suffix[p];
            if (n - p >= 1) {
                unique = max(unique, prifx[n - p] + suffix[p - 1]);
            }
            ans[p] = unique;
        }
        for (int j = 1; j <= n; j++) {
            cout << ans[j] <<" ";
        }
        cout<<endl;
      }
}