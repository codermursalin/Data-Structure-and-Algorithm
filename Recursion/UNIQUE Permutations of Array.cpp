#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void permutation(vector<int> arr, int pos, vector<vector<int>> &answer)
{
    if (pos >= arr.size())
    {
        answer.push_back(arr);
        return;
    }
    unordered_set<char> set;
    for (int i = pos; i < arr.size(); i++)
    {
        if (set.find(arr[i]) != set.end())
            continue;
        set.emplace(arr[i]);
        swap(arr[i], arr[pos]);
        permutation(arr, pos + 1, answer);
        swap(arr[i], arr[pos]);
    }
}
vector<vector<int>> finduniquePermutation(vector<int> arr)
{
    vector<vector<int>> answer;
    int pos = 0;
    permutation(arr, pos, answer);
    return answer;
}
int main()
{
    vector<int> arr{2, 2, 3};
    vector<vector<int>> answer = finduniquePermutation(arr);
    for (auto ele : answer)
    {
        for(auto it:ele){
            cout<<it<<" ";
        }cout<<endl;
    }
}