/*this is the Brute force approach
    Given Arr={7,11,2,15} Target = 9

    Targe - Arr[i] = j to find 
        for exm = 9 - 7 = 2 
        will find for 2 only in the array 

there will be two pointers 
i = Arr[0] and j = Arr.size()-1 (last element)

Time Complexity will be n*2

*/
#include <bits/stdc++.h>
using namespace std;
pair<int,int> two_sum(int arr[], int n,int Target){
    for(int i =0 ; i<n ; i++){
        for(int j = n-1 ; j>=0; j--){
            if(arr[i]+arr[j] == Target){
                return{i,j};
            }
        }
    }
    return{-1,-1};
}
int main(){
    int Arr[5] = {2,7,4,1,0};
    int size = sizeof(Arr)/sizeof(Arr[0]);
    int Target ;
    cout<<"enter the target value"<<endl;
    cin>>Target;
   pair<int,int> ans = two_sum(Arr,size,Target);
   cout<<"the answer is"<<ans.first<<","<<ans.second<<endl;
}
