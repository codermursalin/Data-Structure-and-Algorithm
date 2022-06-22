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
    combinationSum(arr,subset, answer, sum + arr[index], target,index);
    // Not Pick The Element
    subset.pop_back();
    combinationSum(arr,subset, answer, sum, target,index + 1);
    
}
vector<vector<int>> findCombinationSum(vector<int> arr, int target)
{
    vector<vector<int>> answer;
    vector<int> subset;
    int sum = 0;
    combinationSum(arr, subset, answer, sum, target, 0);
    return answer;
}
int main()
{
    vector<int> arr{2, 3,5};
    int target = 8;
    vector<vector<int>> answer = findCombinationSum(arr, target);
    for (auto ele : answer)
    {
        for(auto it:ele){
            cout<<it <<" ";
        }cout<<endl;
    }
}