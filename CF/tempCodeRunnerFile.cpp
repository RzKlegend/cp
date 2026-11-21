//6A
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> s(4);   
    for(int i=0;i<4;i++){
        cin >> s[i];
    }
    sort(s.begin(), s.end());
    if(s[2]==s[1]+s[0]){
        cout<<"TRIANGLE"<<"\n";
    }else if(s[2]<s[1]+s[0]){
        cout<<"SEGMENT"<<"\n";
    }else{
        cout<<"IMPOSSIBLE"<<"\n";
    }
    return 0;
}