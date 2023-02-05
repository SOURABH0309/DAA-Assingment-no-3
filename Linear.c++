#include<iostream>
using namespace std;
int main()
{
    int s;
    int n;
    cout<<"Enter the number of element in an array:-> ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"arr["<<i<<"]:-> ";
        cin>>arr[i];
    }
cout<<"Enter the searching value:-> ";
cin>>s;
for (int i = 0; i < n; i++)
{
    if (arr[i]==s)
    {
        cout<<"Searching number is "<<s<<" at position "<<i;
        break;
    }
    if (i==n)
    {
        cout<<"Searching value"<<s<<" not present in given data";
    }
    
}

return 0;
}