//12.11.26

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        int target = sum /3;
        if(a==target - 1 && b==target && c == target + 1){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }

    }

    return 0;
}