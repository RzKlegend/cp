#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int total_solved = 0;
    while (t--) {
        int i,j,k;
        cin>>i>>j>>k;
        if(i+j+k>=2){
            total_solved++;
        }
    }
    cout<<total_solved <<"\n";

    return 0;
}