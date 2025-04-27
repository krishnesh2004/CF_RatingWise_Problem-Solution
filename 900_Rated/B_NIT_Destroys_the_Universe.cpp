#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define cn cin>>
#define co cout<<
#define fo(i,n) for( int i=0;i<n;i++)
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;

// Common Macros
#define all(v) v.begin(), v.end()
#define pb push_back
#define dbg(x) cerr << #x << " = " << (x) << endl
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define INF LLONG_MAX
#define MAX 100000
typedef pair<int,int>     pii;
typedef pair<ll,ll>       pl;
typedef vector<int>       vi;
typedef vector<ll>        vl;
typedef vector<pii>       vpii;
typedef vector<pl>        vpl;
typedef vector<vi>        vvi;
typedef vector<vl>        vvl;

// Utility Functions
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) if (n % i == 0) return false;
    return true;
}
int mod_exp(int base, int exp, int mod = MOD) {
    int result = 1;
    while (exp) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
void prnt(vector<ll> a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void prnt(vector<vector<ll>> a) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
// Solution Function
void DEKHO_TRY_KARO() {
   // Your solution code here
   int n;
   cn n;
   int arr[n];
   fo(i,n)
   cn arr[i];
   int count =0;
   fo(i,n)
   if(arr[i]==0)
   {
      continue;
   }
   else{
      count++;
      while(arr[i]>=1)
      {
          i++;
      }
   }
   if(count==0)
   {
       co 0<<endl; 
   }
   else if(count ==1)
   {
      co 1<<endl;
   }
   else{
     co 2<<endl;
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