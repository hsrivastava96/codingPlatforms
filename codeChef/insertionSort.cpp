#include<bits/stdc++.h>
using namespace std;

void inSort(int *arr, int n)
{
	int temp = 0;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j >= 0; j--)
		{
			if(arr[j] < arr[j-1]
			{
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int arr[10] = {10, 9, 8,7, 6,5,4,3,2,1};
	inSort(arr, 10);
	for(int i = 0; i<10; i+)
		cout<<arr[i]<<endl;
	return 0;
}