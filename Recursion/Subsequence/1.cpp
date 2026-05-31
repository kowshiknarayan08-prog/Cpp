#include <bits/stdc++.h>
using namespace std;
int globalsum = 0;
void printSub(int i , vector<int> &ds , int arr[] , int n){
    if(i == n){
        int sum = 0;
        for(auto num : ds){
            sum += num;
        }
        if(sum == globalsum){
        for(auto it : ds){
            cout << it << " ";
        }
        cout << endl;
    }
        return;
    }
    ds.push_back(arr[i]);
    printSub(i+1 , ds , arr , n);
    ds.pop_back();
    printSub(i+1 , ds , arr , n);
}
int main(){
    int arr[] = {3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ds;
    printSub(0 , ds , arr , n);

}