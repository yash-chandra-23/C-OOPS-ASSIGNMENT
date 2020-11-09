#include<iostream>
using namespace std;
int recursiveMinimum(int arr[],int first,int last)
{
     static int min = arr[first];
    if(arr[first]<=min)
	{
		min=arr[first];
	}
	if(first==last)
	{
		return min;
	}
	return recursiveMinimum(arr,first+1,last);
	return min;
}
int main()
{   int n;
	cout<<"enter the size of array: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int min = recursiveMinimum(arr , 0 , n-1);
	cout<<"the minimum element of array: "<<min;
}
