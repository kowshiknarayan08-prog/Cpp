#include <bits/stdc++.h>
using namespace std;
bool is_palin(string s , int i){
    if( i >= s.size()/2) return true;
    if(s[i] != s[s.size() - i-1]) return false;
    else {
        return is_palin(s , i+1);
    }
}
int main(){
    string s = "madam";
    cout << is_palin(s , 0);
}