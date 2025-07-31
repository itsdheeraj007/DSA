#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void leftRotateByOne(int arr[],int n){
    int temp = arr[0];
    for(int i = 1 ; i < n ; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    for(int i =0; i< n ; i++){
        cout<<arr[i];
    }
}
int main() {
    int arr[] = {1,2,4,7,7,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "size of the array --> " << n << endl;
    
    for(int i = 0; i < n; i++) {
        cout << "array -> " << arr[i] << endl;
    }

   cout<<"rotated arrya"; leftRotateByOne(arr, n);
    return 0;
}
