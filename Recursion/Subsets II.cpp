#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(vector<int>&arr,vector<int>subset,vector<vector<int>>&answer,int index){
    if(index==arr.size()){
        answer.push_back(subset);
        return;
    }
    
     // Pick the Element
    subset.push_back(arr[index]);
    solve(arr,subset,answer,index+1);  
    // Not Pick the Element
    subset.pop_back(); 
    while(index+1<arr.size() && arr[index]==arr[index+1]) index++;
    solve(arr,subset,answer,index+1);
   
}
vector<vector<int>> findsubset(vector<int> arr){
  vector<vector<int>>answer;
  vector<int>subset;
  sort(arr.begin(),arr.end());
  solve(arr,subset,answer,0);
  return answer;
}
int main()
{
    vector<int>arr{1,2,2};
    vector<vector<int>> answer=findsubset(arr);
    for(auto ele:answer){
        for(auto it:ele){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}