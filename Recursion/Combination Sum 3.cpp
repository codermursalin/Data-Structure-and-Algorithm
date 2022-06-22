#include<iostream>
#include<vector>
using namespace std;
void combinationSum(int k,int target,int element,int sum,vector<int> subset,vector<vector<int>>&answer){
    if(subset.size()==k && target==sum){
        answer.push_back(subset);
        return;
    }
    if(subset.size()>k) return;
    if(element>9) return;
    subset.push_back(element);
    combinationSum(k,target,element+1,sum+element,subset,answer);
    subset.pop_back();
    combinationSum(k,target,element+1,sum,subset,answer);
}
vector<vector<int>> findCombinationSum(int k, int target){
    vector<vector<int>>answer;
    int element=1;
    vector<int>subset;
    int sum=0;
    combinationSum(k,target,element,sum,subset,answer);
    return answer;
}
int main(){
    int k,target;
    cin>>k>>target;
    vector<vector<int>> answer = findCombinationSum(k, target);
    for (auto ele : answer)
    {
        for(auto it:ele){
            cout<<it <<" ";
        }cout<<endl;
    }
}