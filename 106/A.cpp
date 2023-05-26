#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int oddCount = 0;
        int evenCount = 0;
        vector<int> a(n);
        for (int i=0; i<n; i++){
            int x; cin >> x;
            a[i] = x;
            if (x%2==0) evenCount++;
            else oddCount++;
            if (evenCount>1 && oddCount>1) break;
        }
        if (oddCount==1){
            for (auto x: a){
                if (x%2==1){
                    cout << x << endl;
                    break;
                }
            }
        }
        else if (evenCount==1){
            for (auto x: a){
                if (x%2==0){
                    cout << x << endl;
                    break;
                }
            }
        }
    }   
}