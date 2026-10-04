#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;

    vector<ll> nums(n);

    for(int i=0;i<=n;i++){
        cin>>nums[i];
    }

    ll count = 0;   
    for (int i = 1;i<n;i++){
        if(nums[i] < nums[i-1]){
            count += (nums[i-1] - nums[i]); 
            nums[i] = nums[i-1];
        }
    }
    cout << count<<"\n";
    return 0;
}