#include <iostream>
#include <vector>
#include <limits.h>
#include <stdio.h>

// Returns true if arr[i..n-1] represents a
// max-heap
bool isHeap(int arr[], int i, int n)
{
	// If a leaf node
	if (i >= (n - 2) / 2)
		return true;

	// If an internal node and is
	// greater than its children,
	// and same is recursively
	// true for the children
	if (arr[i] >= arr[2 * i + 1] &&
		arr[i] >= arr[2 * i + 2]
		&& isHeap(arr, 2 * i + 1, n)
		&& isHeap(arr, 2 * i + 2, n))
		return true;

	return false;
}

// Driver program
//int main()
//{
//	int arr[] = {100, 100, 97, 94, 98, 83, 89, 93, 90, 96, 83, 76, 83, 86, 83, 36, 72, 73, 88, 87,
//	 93, 75, 79, 76, 70, 75, 76, 63, 73, 61, 68, 27, 18, 51, 60, 65, 19, 83, 32, 31, 82, 34, 78, 72, 65, 66, 42,
//	  47, 61, 5, 33, 18, 74, 75, 49, 2, 14, 16, -1, 25, 3, 49, 54, -5, -6, 8, 2, -1, 35, 1, 40, 2, 47, 7, 9,
//	   17, 73, -9, 7, 28, 10, 62, 72, -3, 1, 13, 48, 35, 50, 39, 44, 0, 34, 6, 41, 42, 23, 3, 59, -8  };
//	int n = sizeof(arr) / sizeof(int) - 1;
//
//	isHeap(arr, 0, n) ? printf("Yes") : printf("No");
//
//	return 0;
//}


int main()
{
    vector<int> input;

    int value;
    while((cin >> value) && value != 'x'){
        input.push_back(value);
    }
    .

    return 0;
}
