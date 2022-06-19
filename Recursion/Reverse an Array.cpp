#include <iostream>
using namespace std;
void reverse(int arr[],int start,int end)
{
    if(start>=end) return;
    swap(arr[start],arr[end]);
    reverse(arr,start+1,end-1);
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    reverse(arr,0,size-1);
        for(int ele:arr){
        cout<<ele<<" ";
    }
}