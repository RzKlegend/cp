#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,X;
	    cin>>N>>X;
	    int S;
	    int min=0;
	    if(N>6){
	        if(N%6==0){
	            S = N/6;
	            min = X*S;
	            cout<<min<<"\n";
	        }
	        else if(N%6 != 0){
	            S = N%6 - 1;
	            min = X * S;
	            cout<<min<<"\n";
	        }
	    }
	    else{
	        min = X/N;
	        cout<<min<<"\n";
	    }
	    
	}
	return 0;
}
