#include<iostream>
#include<vector>
using namespace std;
void combination(int n,int k,int element,vector<int>subset,vector<vector<int>>&answer){
    if(k==0){
        answer.push_back(subset);
        return;
    }
    if(element>n) return;
    if(k>n-element+1) return;
    // Pick The Element
    subset.push_back(element);
    combination(n,k-1,element+1,subset,answer);
    // Not Pick the Element
    subset.pop_back();
    combination(n,k,element+1,subset,answer);
}
vector<vector<int>> findCombinations(int n,int k){
    vector<vector<int>>answer;
    vector<int>subset;
    int element=1;
    combination(n,k,element,subset,answer);
    return answer;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>>answer=findCombinations(n,k);
     for(auto ele:answer){
        for(auto it:ele){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}