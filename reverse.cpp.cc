#include<iostream>
using namespace std;
int main()
{
int i, n;
cout<<"enter the number of array elements";
cin>>n;
int a[n];
cout<<"enter the array elements";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"array elements in reverse order";
for(i=n-1;i>=0;i--)
{
cout<<a[i];
}
return 0;
}
