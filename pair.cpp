#include <bits/stdc++.h>
using namespace std;
int main(){
    // Pair lies inside the utility library
    pair<int , int> p = {1 , 2};
    cout << p.first << " " << p.second << endl;
    
    // More than two elements in a pair
    pair<int , pair<int , int>> q = { 1 , {2 , 3}} ;
    cout << q.second.first << endl ;

    //Array of pairs
    pair<int , int> arr[] = {{1,2} , {3,4} , {5,6}};
    cout << arr[1].second ;

}