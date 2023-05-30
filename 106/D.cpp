#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> a(n);
    ll sum = 0;
    for (int i=0; i<n; i++){
        int r; cin >> r;
        a[i]=r;
        sum += r;
    }
    int q; 
    cin >> q;
    vector <ll> cumulSum(n);
    cumulSum[0] = a[0];
    for (int i=1; i<n; i++){
        cumulSum[i] = cumulSum[i-1] + a[i];
    }
    for (int i=0; i<q; i++){
        ll x;
        int k;
        cin >> x >> k;
        k--;
        x += cumulSum[k];
        x %= cumulSum[n];
        if (x == 0) {
            cout << n << endl;
            continue;
        }
        int ans = lower_bound(cumulSum.begin(),cumulSum.end(),x) - cumulSum.begin();
        cout << ans << endl;
    }
}