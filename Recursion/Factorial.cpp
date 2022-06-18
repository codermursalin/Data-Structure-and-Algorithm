#include<iostream>
using namespace std;
int factorial(int num){
    return num==0?1:num*factorial(num-1);
}
int main(){
    int num;
    cin>>num;
    cout<<factorial(num);
}