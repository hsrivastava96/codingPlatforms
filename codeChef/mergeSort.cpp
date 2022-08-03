#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int b, int e, int mid, int n)
{
	int l[mid - b + 1], r[e - mid + 1];

	for(int i = b, j = 0; i <= mid; i++, j++)
		l[j] = a[i];

	for(int i = mid + 1, j = 0; i <= e; i++, j++)
		r[j] = a[i];

	int i = 0;
	int p = 0, q = 0;
	for(; i < n; i++)
	{
		if(l[p] < r[q])
		{
			a[i] = l[p];
			p++;
		}
		else if(l[p] == r[q])
		{
			a[i] = l[p];
			p++;
			q++;
		}
		else
		{
			a[i] = r[q];
			q++;
		}
	}

	while(p <= mid)
		a[i++] = l[p++];
	while(q <= e)
		a[i++] = r[q++];
}

void mergeSort(int a[], int b, int e, int n)
{
	if(b > e)
		return;
	else
	{
		int mid = (b + e)/2 - 1;
		mergeSort(a, b, mid, n);
		mergeSort(a, mid+1, e, n);
		merge(a, b, e, mid, n);
	}
}


int main()
{

	int n, m;
	cin>>n;

	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin>>m;
		a[i] = m;
	}	

	mergeSort(a, 0, n-1, n);

	return 0;
}