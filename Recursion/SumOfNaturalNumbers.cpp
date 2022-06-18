#include <iostream>
using namespace std;
int sum(int num)
{
    return num == 0 ? 0 : num +sum(num - 1);
}
int main()
{
    int num;
    cin >> num;
    cout << sum(num);
}