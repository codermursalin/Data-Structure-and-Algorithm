#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subsetSum(vector<int>arr,vector<int>&answer,int sum,int index){
    if(index>=arr.size()){
        answer.push_back(sum);
        return;
    }
    // Not Pick The Element
    subsetSum(arr,answer,sum,index+1);
    //Pick The element
    subsetSum(arr,answer,sum+arr[index],index+1);
}
vector<int>findSubsetSum(vector<int>arr){
    vector<int>answer;
    int sum=0;
    subsetSum(arr,answer,sum,0);
    sort(answer.begin(),answer.end());
    return answer;
}
int main(){
    vector<int>arr{5, 2, 1};
    vector<int> answer=findSubsetSum(arr);
    for(auto ele:answer){
        cout<<ele<<" ";
    }
}