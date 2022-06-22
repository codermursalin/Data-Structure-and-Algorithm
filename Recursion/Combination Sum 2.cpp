#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void combinationSum(vector<int> arr, vector<int> subset, vector<vector<int>> &answer, int sum, int target, int index)
{
    if (sum == target)
    {
        answer.push_back(subset);
        return;
    }
    if (index >= arr.size() || sum>target)
    {
        return;
    }
    // Pick The element
    subset.push_back(arr[index]);
    combinationSum(arr,subset, answer, sum + arr[index], target,index+1);
    // Not Pick The Element
    subset.pop_back();
    while(index+1<arr.size() && arr[index]==arr[index+1]) index++;
    combinationSum(arr,subset, answer, sum, target,index + 1);
    
}
vector<vector<int>> findCombinationSum(vector<int> arr, int target)
{
    vector<vector<int>> answer;
    vector<int> subset;
    int sum = 0;
    sort(arr.begin(),arr.end());
    combinationSum(arr, subset, answer, sum, target, 0);
    return answer;
}
int main()
{
    vector<int> arr{2,5,2,1,2};
    int target = 5;
    vector<vector<int>> answer = findCombinationSum(arr, target);
    for (auto ele : answer)
    {
        for(auto it:ele){
            cout<<it <<" ";
        }cout<<endl;
    }
}