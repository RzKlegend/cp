#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;
    ll k;
    for(k=1;k<=n;k++){

    
        ll tw = k*k* ( k*k- 1)/2; //number of total ways to place the knigts (nC2 approach of finding the total ways)
        ll aw = 4 * (k-1) * (k-2); //number of ways the two knights can attack each other
        ll sw = tw - aw; //safe ways
    
        cout<<sw<<"\n";
    
    }
    return 0;
}