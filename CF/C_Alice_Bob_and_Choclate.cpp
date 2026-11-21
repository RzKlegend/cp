//6C
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;
    
    vector<int> t(n);
    for(int i=0;i<=n-1;i++){
        cin>>t[i];
    }
    int a=0,b=0, timeA=0, timeB=0;

    int low = 0;
    int high = n-1;

    while(low<=high){
        if(timeA <= timeB){
            timeA += t[low];
            a++;
            low++;
        }
        else{
            timeB+=t[high];
            b++; high--;
        }
    }
    cout<< a << " " << b<< "\n";

    return 0;
}