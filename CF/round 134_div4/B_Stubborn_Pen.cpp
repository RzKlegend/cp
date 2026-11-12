#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        int n; cin>>n;
        cin>>s;
        char current  = 'R';
        int count = 0;
        for (char ch : s){
            if(current != ch){
                count++;
            } current  =(ch == 'R') ? 'B' : 'R';
        }
        cout<<count<<"\n";
    }

    return 0;
}