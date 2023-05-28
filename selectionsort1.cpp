#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndx=i;
        for(int j=i+1;j<n;j++)
        {
            
            if(arr[j]<arr[minIndx])
                minIndx=j;
        }
        swap(arr[i],arr[minIndx]);
    }
}
int main()
{
int n;
int arr[100];
cout<<"Enter the no of elements you want to enter in array:";
cin>>n;
cout<<"Enter the elements of array:";
for(int i=0;i<n;i++)
cin>>arr[i];

selectionsort(arr,n);

cout<<"Sorted array is:";
for(int i=0;i<n;i++)
cout<<arr[i];
return 0;


}