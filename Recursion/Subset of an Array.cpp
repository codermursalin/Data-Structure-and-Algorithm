#include <iostream>
#include<vector>
using namespace std;
void solve(vector<int>&arr,vector<int>subset,vector<vector<int>>&answer,int index){
    if(index==arr.size()){
        answer.push_back(subset);
        return;
    }
     // Not Pick the Element
     solve(arr,subset,answer,index+1);
    // Pick the Element
    subset.push_back(arr[index]);
    solve(arr,subset,answer,index+1);
   
    
}
vector<vector<int>> findsubset(vector<int> arr){
  vector<vector<int>>answer;
  vector<int>subset;
  solve(arr,subset,answer,0);
  return answer;
}
int main()
{
    vector<int>arr{1,2,3};
    vector<vector<int>> answer=findsubset(arr);
    for(auto ele:answer){
        for(auto it:ele){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}