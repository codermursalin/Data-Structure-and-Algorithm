#include<iostream>
#include<vector>
using namespace std;
void permutation(string str,int pos,vector<string>&answer){
    if(pos==str.size()){
        answer.push_back(str);
        return;
    }
    for(int i=pos;i<str.size();i++){
        swap(str[i],str[pos]);
        permutation(str,pos+1,answer);
        swap(str[i],str[pos]);
    }
}
vector<string> findPermutation(string str){
    vector<string>answer;
    int pos=0;
    permutation(str,pos,answer);
    return answer;
}
int main(){
    string str;
    cin>>str;
    vector<string> answer=findPermutation(str);
    for(auto ele:answer){
        cout<<ele<<endl;
    }
}