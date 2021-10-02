// Optimized implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;
//function to swap
void swap(int *xp, int *yp) 
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
int i, j;
bool swapped;
for (i = 0; i < n-1; i++)
{
	swapped = false;
	for (j = 0; j < n-i-1; j++)
	{
		if (arr[j] > arr[j+1])
		{
		swap(&arr[j], &arr[j+1]);
		swapped = true;
		}
	}

	// IF no two elements were swapped by inner loop, then break
	if (swapped == false)
		break;
}
}

// Function to print an array
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout <<" "<< arr[i];
	cout <<" n";
}


int main()
{
    int n;
    cin>>n;
	int arr[n];
    //taking input
	for(int i=0; i<n; i++){ 
        cin>>arr[i];
    }
	bubbleSort(arr, n); //calling bubble sort functio
	printArray(arr, n); //printing array
	return 0;
}

