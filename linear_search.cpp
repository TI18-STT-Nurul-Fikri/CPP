#include <bits/stdc++.h>
using namespace std;

bool linear_search(int arr[], int n, int target){
    for(int i = 0; i < n; i++)
        if(arr[i] == target)
            return true;
    
    return false;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    int target;
    cin >> target;
    if(linear_search(arr, n, target))  cout << "the given target value is present in array";
    else cout << "the given target value is not present in array";
    return 0;
}