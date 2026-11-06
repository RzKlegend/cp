#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    int count =0;
    for(char c :s){
        if(c=='o'){
            count++;
        }
    }
    if(count%2==0){
        cout<<"even"<<endl;
    }else{
        cout<<"odd";
    }

    return 0;
}