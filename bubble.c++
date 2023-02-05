#include<iostream>
using namespace std;
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
    for (int k = 0; k < n; k++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j]>=arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
        cout<<"The Sorted array is:-> "<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" "<<endl;
        }
        
    
    
return 0;
}