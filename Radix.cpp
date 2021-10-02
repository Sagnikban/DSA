//Radix Sort

#include <bits/stdc++.h>
using namespace std;

void CountSort(int arr[], int n, int exp)
{
    int output[n]; // output array
    int i, count[10] = {0};

    // Store count of occurrences in count[]
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Change count[i] so that count[i] now contains actual
    //  position of this digit in output[]
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

//it uses Counting Sort ad a Subroutine for sort the digits
void RadixSort(int arr[], int n)
{
    int Mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > Mx)
        {
            Mx = arr[i];
        }
    }
    for (int exp = 1; Mx / exp > 0; exp *= 10)
    {
        CountSort(arr, n, exp);
    }
}

int main()
{
    //the length of array
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    RadixSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}