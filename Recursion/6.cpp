#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int> &arr , int left , int right ){
    if(left >= right) return;
    swap(arr[left] , arr[right]);
    reverse(arr , left+1 , right-1);
}
int main(){
    cout << "Enter n : ";
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0 ; i< n; i++){
        cin >> arr[i];
    }
    reverse(arr , 0 , n-1);
    for(int num : arr){
        cout << num << " ";
    }
}