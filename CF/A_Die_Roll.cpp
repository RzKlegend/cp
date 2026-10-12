#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int y,w;
    cin>>y>>w;

    int res = max(y,w);
    int chances = 6 - res +1;

    string prob[] = {"","1/6","1/3","1/2","2/3","5/6","1/1"};

    cout<<prob[chances]<<endl;
    return 0;
}