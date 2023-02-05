#include<iostream>
using namespace std;
int binary(int arr[],int arr_size,int search);
int exponential(int arr[],int arr_size,int search)
{   
    if (arr[0]==search)
    {
        return 0;
    }
    int i=1;
    while (i<arr_size && arr[i]<=search)
    {
        i=i*2;
        return binary(arr,i/2,min(i,(arr_size*1)),search);
    }
    
}
int binary(int arr[],int l,int r,int search)
{int mid;
    if(r>=1)
    {
        mid=l+(r-1)/2;
    }
    if(arr[mid]==search){
        return mid;
    }
    if (arr[mid]>search)
    {
         return binary(arr,l,mid-1,search);
    }
    else
    {
        return binary(arr,l,mid+1,search);
    }
    
    
}
int main()
{
    int n;
    cout<<"Enter the number of element in an array:-> ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"arr["<<i<<"]:-> ";
        cin>>arr[i];
    }
    int search;
    cout<<"Enter the searching number:-> ";
    cin>>search;
    int x=exponential(arr,n,search);
    if(x!=-1)
    {
        cout<<"Element is present at index:-> "<<x;
    }
    else
    {
        cout<<"Element is not present in an array";
    }
    
return 0;
}