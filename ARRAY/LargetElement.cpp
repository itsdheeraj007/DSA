#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findLargest(int arr[] ,int n){
    int largest = arr[0];
    for(int i =1 ;i<n ;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest ;
}
int findSecondLargest(int arr[] ,int n){
    int largest = 0;
    int secondLargest = -1;
    for(int i =1 ;i<n ;i++){
        if(arr[i]>arr[largest]){
            secondLargest = largest;
            largest = i;
            
        }else if(arr[i]>arr[secondLargest] && arr[i]!=arr[largest]){
            secondLargest = i;
        }
    }
    return secondLargest ;
}

int main() {
    int arr[] = {1,2,4,7,7,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "size of the array --> " << n << endl;
    
    for(int i = 0; i < n; i++) {
        cout << "array -> " << arr[i] << endl;
    }
    int ans = findLargest(arr,n);
    cout<<"largest number in the array is"<<ans<<endl;
    int ans2 = findSecondLargest(arr,n);
        cout<<"Second largest number in the array is"<<arr[ans2]<<endl;
    return 0;
}
