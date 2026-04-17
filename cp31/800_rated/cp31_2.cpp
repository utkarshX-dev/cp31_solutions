    #include <bits/stdc++.h>
    using namespace std;

    using ll = long long;
    using ld = long double;
    using pii = pair<int, int>;
    using pll = pair<ll, ll>;


    #define fastio() ios::sync_with_stdio(false); cin.tie(NULL)
    #define pb push_back
    #define all(x) (x).begin(), (x).end()
    #define sz(x) ((int)(x).size())

    const int MOD = 1e9 + 7;



    ll power(ll a, ll b, ll mod = MOD) {
        ll res = 1;
        a %= mod;
        while (b) {
            if (b & 1) res = (res * a) % mod;
            a = (a * a) % mod;
            b >>= 1;
        }
        return res;
    }

    ll gcd(ll a, ll b) {
        return b ? gcd(b, a % b) : a;
    }


    void solve() {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int res = 0;
        res = max(res, 2 * (x - a[n - 1]));

        int prev = 0;
        for(int& ele : a){
            res = max(res, ele - prev);
            prev = ele;
        }
        cout << res << endl;    
    }


    int main() {
        fastio();

        int t = 1;
        cin >> t;  
        while (t--) {
            solve();
        }

        return 0;
    }