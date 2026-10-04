#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
	cin>>T;
	while(T--){
        int y,x;
        int sum = 0;
        int count=0;
        cin>>x;
        for(int i = 0;i<y;i++){
            for(int j=0;j<y;j++){
                sum += j;
            }
        }
        if(y - sum = x){
            count++;
        }
        return count;
	}
    return {};
}