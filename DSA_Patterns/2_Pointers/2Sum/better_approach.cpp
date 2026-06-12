/*we have a better approach to reduce the Time Complexity using HASHMAP 

0---->7
1---->11--------> sorting the values with the indexes as  key value pair in hashmap 
2---->2
3---->15
 HASH 

SO TIME COMPLEXITY WILL BE REDUCED BY O(n) but 
        we will be using extra space for it which is a bit problem in the real world scenerios 
*/
#include <bits/stdc++.h>
using namespace std;
pair<int,int> two_sum(int arr[], int n,int Target){
   unordered_map<int,int> mp;
    for(int i = 0 ; i<n ;i++){
        int compliment = Target - arr[i];
        if(mp.find(compliment) != mp.end()){
            return{mp[compliment],i};
        }
        else{
            mp[arr[i]]=i;
          
        }
          for(auto pair:mp){
                cout<<pair.first<<","<<pair.second<<endl;
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
