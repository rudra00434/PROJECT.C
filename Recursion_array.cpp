#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    bool rest = sorted(arr+1,n-1);
    return(arr[0]<arr[1] && rest);
}
int main()
{
    int arr[10],n;
    cout<<"enter the size: ";
    cin>>n;
    cout<<"enter the elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<sorted(arr,n)<<endl;
    return 0;
}

