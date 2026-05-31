#include <bits/stdc++.h>
using namespace std;
int fibb(int n){
    if ( n == 0 ) return 0;
    if (n == 1) return 1;
    return fibb(n-1) + fibb(n - 2);
}

int main(){
    cout << "Enter n to compute fibanocci ";
    int n ;
    cin >> n;
    cout << fibb(n);
    
}

// this is order of 2^n because fib(3) is computed
//Multiple time, fib(2) will be computed even more times