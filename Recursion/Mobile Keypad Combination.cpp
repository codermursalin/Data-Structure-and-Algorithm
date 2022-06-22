#include<iostream>
#include<vector>
using namespace std;

vector<string> mobileDigit={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> letterCombinations(string digits) {
            vector<string>answer;
    if(digits.size()==0){
        return answer;
    }
    int firstIndex=digits[0]-'0';
    string resDigits=digits.substr(1);
    vector<string> recAns=letterCombinations(resDigits);
    if(recAns.size()==0){
        recAns.push_back("");
    }
    for(auto ele:mobileDigit[firstIndex]){
        for(auto it:recAns){
            answer.push_back(ele+it);
        }
    }
    return answer;
    }
int main(){
    vector<string> ans=letterCombinations("23");
    for(string ele:ans){
        cout<<ele<<" ";
    }
}