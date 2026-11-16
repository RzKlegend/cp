#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a;
        int sum=0;
        int mx = -100;
        for(int i=0;i<7;i++){
            cin>>a;
            sum +=a;
            mx = max(mx,a);
        }
        cout << -sum + 2*mx<<"\n"; // we do this because we do -(sum) [the addition of all of the integers - all 6 integers + mx] + 2 *mx [means -mx + mx, so at the end its the 6 integers + mx]
    }

    return 0;
}