#include <iostream>
using namespace std;
int fibonancii(int num)
{
    return num <=1 ? num :fibonancii(num - 1)+fibonancii(num-2);
}
int main()
{
    int num;
    cin >> num;
    cout << fibonancii(num);
}