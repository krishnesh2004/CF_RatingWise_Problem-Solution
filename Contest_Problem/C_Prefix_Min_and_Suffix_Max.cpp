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
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> pri(n), suff(n);

    pri[0] = v[0];
    for (int i = 1; i < n; i++)
        pri[i] = min(pri[i - 1], v[i]);

    suff[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suff[i] = max(suff[i + 1], v[i]);

    string ans = "";
    for (int i = 0; i < n; i++) {
        bool check = false;
        if (i < n - 1 && (pri[i] == v[i] || suff[i + 1] == v[i]))
            check = true;
        if (i > 0 && (pri[i - 1] == v[i] || suff[i] == v[i]))
            check = true;

        ans += (check ? '1' : '0');
    }

    cout <<ans<<endl;
}

// Main Function
int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) DEKHO_TRY_KARO();
    return 0;
}