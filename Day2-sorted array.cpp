//Program for sorted arrays
#include<iostream>
using namespace std;
int occurence(int arr[], int n, int x)
{
	int count = 0;
	for(int i = 0; i<n; i++)
	{
		if(arr[i]==x)
		count++;
	}
	return count;
}
int main()
{
	int arr[] = {0,1,1,0,2,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 1;
	int occur = occurence(arr, n, x);
	cout<<occur<<endl;
	return 0;
	}
