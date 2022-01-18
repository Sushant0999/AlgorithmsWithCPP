#include <bits/stdc++.h>
using namespace std;

// Bubble Sorting //

//Function Declaration
void sort(int nums[], int low, int high);

int main()
{
    // Declaring an Array
    int arr[] = {5, 4, 3, 2, 1};

    // Finding Size of Array
    int last = sizeof(arr) / sizeof(arr[0]);

    // Calling Function
    sort(arr, 0, last - 1);

    // Printing Array after Sorting
    for (int i = 0; i < last; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

//Function Defintion
void sort(int nums[], int low, int high)
{   
    //checking the number of element in subarray
    if (low >= high)
    {
        return;
    }

    //Creting variable for swapping
    int s = low;
    int e = high;
    int m = s + (e - s) / 2;
    int pivot = nums[m];

    //Checking if start is less than or equal to end
    while (s <= e)
    {
        while (nums[s] < pivot)
        {
            s++;
        }
        while (nums[e] > pivot)
        {
            e--;
        }
        if (s <= e)
        {
            int temp = nums[s];
            nums[s] = nums[e];
            nums[e] = temp;
            s++;
            e--;
        }
    }
    sort(nums, low, e);
    sort(nums, s, high);
}
