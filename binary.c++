#include<iostream>
using namespace std;

int main()
{
int list[10] = {};
int i, key, begin = 0, end = 9, pos = -1, mid, cnt = 0;
cout<<"\nEnter 10 elements in sorted order:";
for(cnt = 0; cnt < 10; ++cnt)
cin>>list[cnt];
cout<<"\nEnter value to be searched:";
cin>>key;
cnt = 0;
while(begin <= end)
{
++cnt;
mid = (begin + end) / 2;
if(list[mid] == key)
{
pos = mid;
cout<<"\nSearch value"<<key<<"found at position"<<(pos + 1);
cout<<"\nSteps required are "<< cnt;
break;
}
else if(list[mid] > key)
end = mid - 1;
else
begin = mid + 1;
}
if(pos == -1)
{
cout<<"\nSearch value " <<key<<" is not present in the list";
}
return 0;
}