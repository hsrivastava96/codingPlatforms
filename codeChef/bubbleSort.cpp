#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n)
{
    int temp = 0;
    for(int i = n; i > 0; i--)
    {
        for(int j = 0; j < i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int arr[10] = {10, 9, 8, 7, 6, 5,4,3,2,1};
    bubbleSort(arr, 10);
    for(int i =0; i<10; i++)
        cout<<arr[i]<<endl;
}