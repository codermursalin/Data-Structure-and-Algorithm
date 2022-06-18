#include <iostream>
using namespace std;
bool check(string str,int start,int end)
{
    if(start>=end) return true;
    if(str[start]!=str[end]) return false;
    return check(str,start+1,end-1);
}
bool isPalindrom(string str){
    int start=0;
    int end=str.size()-1;
    return check(str,start,end);
}
int main()
{
    string str;
    cin>>str;
    cout<<isPalindrom(str);
}