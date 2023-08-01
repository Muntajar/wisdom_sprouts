//program to find Kth largest element in a given array 
#include<iostream>
using namespace std;
int kth(int arr[], int size)
{
    int largest = arr[0];
    for(int i= 1; i<size; i++)
    {
        if(arr[i]> largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int main()
{
    int size;
    cout<<"Enter the size of an array:-";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array:-";
    for(int i=0; i<size; i++)
    {
    cin>>arr[i];
    }
    int large = kth(arr, size);
    cout<<"The Largest Kth Element in a given Array is:- "<<large<<endl;
    return 0;
  
}
