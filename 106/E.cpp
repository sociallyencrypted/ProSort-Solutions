#include <iostream>

using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    ll a[n];
    ll dp[n];
    for (int i=0; i<n; i++){
        ll x; cin >> x;
        a[i] = x;
        dp[i] = LLONG_MAX;
    }
    dp[0]=0;
    for (int i=1; i<n; i++){
        int backwardCount = max(0, i-k);
        for (int j=backwardCount; j<i; j++){
            dp[i] = min(dp[i], abs(a[i]-a[j])+dp[j]);
        }
    }
    cout << dp[n-1] << endl;
}