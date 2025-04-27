#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define fastio() (ios_base::sync_with_stdio(false), cin.tie(NULL))
using namespace std;
/////Created By Krishnesh Tiwari
 
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
 
bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) if (n % i == 0) return false;
    return true;
}
 
int power(int base, int exp) {
    int result = 1;
    while (exp) {
        if (exp % 2 == 1) result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}
 
////<---------------  Acutal Code Start -------------->>>>>>
 
void DEKHO_TRY_KARO() {
   // Your solution code here
   int n;
   cin>>n;
   int arr[n];
   vector<int> count(n + 2, 0);
   for (int i = 0; i < n; i++) {
       cin>>arr[i];
   }
   for (auto it: arr)
   {
    if (it <= n) count[it]++;
   }

   vector<int> diff(n + 2, 0);
   for (int k = 0; k <= n; k++) {
    bool valid = true;
    for (int i = 0; i <= n; i++) {
        if (count[i] > 0) {
            if (!(count[i] >= k && (n - i) >= k)) {
                valid = false;
                break;
            }
        }
    }
    cout << (valid ? 1 : 0) << " ";
 }
 cout << endl;
}

// Main Function
int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) DEKHO_TRY_KARO();
    return 0;
}
