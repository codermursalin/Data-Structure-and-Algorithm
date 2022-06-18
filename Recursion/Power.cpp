#include <iostream>
using namespace std;
int calculatePower(int num,int power)
{
    if(power==0) return 1;
    return num*calculatePower(num,power-1);
}

int calculatePower2(int num,int power)
{
    if(power==0)return 1;
    int answer=calculatePower2(num,power/2);
    answer=answer*answer;
    if(power%2==1){
        answer=num*answer;
    }
    return answer;
}
int main()
{
    int num, power;
    cin >> num >> power;
    cout << calculatePower2(num, power);
}