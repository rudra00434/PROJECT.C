#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};
    int MAX_sum=-1;
    for(int start=0;start<n;start++)
    { 
        int sum=0;
        for(int end=start;end<n;end++)
        {
            sum+=arr[end];
            MAX_sum=max(sum,MAX_sum);
        }
    }
    cout<<"maximun subarray sum "<<MAX_sum<<endl;
    return 0 ;
}