#include <iostream>
using namespace std;

int binSearch(int arr[], int key, int low, int mid, int high)
{
    int final_op = 0;
    if(low <= high)
    {
        if(arr[mid] == key)
        {
            cout<<"Found at --> "<<mid<<endl;
            return 0;
        }
        else if(key > arr[mid])
        {
            low = mid + 1;
            mid = (low + high)/2;
            final_op = binSearch(arr, key, low, mid, high);
        }
        else
        {
            high = mid - 1;
            mid = (low + high)/2;
            final_op = binSearch(arr, key, low, mid, high);
        }
        return final_op;
    }
    else
        return -1;
}

int main() 
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int finalOP = binSearch(arr, 10, 0, 4, 9);
    cout<<finalOP;
	// your code goes here
	return 0;
}
