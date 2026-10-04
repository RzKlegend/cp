/*You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
Input
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
Output
Print the missing number.
Constraints

2 \le n \le 2 \cdot 10^5

Example
Input:
5
2 3 1 5

Output:
4*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// here the logic we use is that we find the sum of n numbers and minus that with the sum of the given numbers, with this we find the missing numnber
// for example if something costs 15 dollars and u only have 11 dollars, there is a deficient of 4 dollars, thats the missing number
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    long long AS=0; //actual sum,
    long long ES = n * (n+1) /2; //expected sum;
    for (int i = 0;i<n-1;i++){
        long long CN; //current number
        cin>>CN;
        AS += CN;
    }
    cout<< ES - AS<<" ";
    return 0;

    return 0;
}