#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int g(int a, int b){
    while(b!=0){
        int temp = b;
        b = a %b;
        a = temp;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int m;
    cin>>m;
    int count = 0;
    for (int i=1;i<=m;i++){
        
        if(g(i,m)==1){
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}