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
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    map<int, int> freq;
    for (int x : a) freq[x]++;

    if(freq.size() == 1){
        cout << "Yes" << endl;
        return;
    }else if(freq.size() > 2){
        cout << "No" << endl;
        return;
    }else{
        auto it = freq.begin();
        int freq1 = it->second;
        it++;
        int freq2 = it->second;
        if(n % 2 == 0){
            if(freq1 != freq2){
                cout << "No" << endl;
                return;
            }else{
                cout << "Yes" << endl;
                return;
            }

        }else{
            if((freq1 ==  (n - 1) / 2 && freq2 == (n + 1)/2) || (freq1 ==  (n + 1) / 2 && freq2 == (n - 1)/2)){
                cout << "Yes" << endl;
                return;
            }else{
                cout << "No" << endl;
                return;
            }
        }
    }

    
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