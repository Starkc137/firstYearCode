#include <iostream>
#include <vector>
#include <limits.h>
#include <stdio.h>

using namespace std;

// Returns true if arr[i..n-1] represents a
// max-heap
bool isHeap(int arr[], int i, int n)
{
    // If a leaf node
    if (i >= (n - 2) / 2)
        return true;

    
    if (arr[i] >= arr[2 * i + 1] &&
        arr[i] >= arr[2 * i + 2]
        && isHeap(arr, 2 * i + 1, n)
        && isHeap(arr, 2 * i + 2, n))
        return true;

    return false;
}


int main()
{
    vector<int> input;

    int value;
    while((cin >> value) && value != 'x'){
        input.push_back(value);
    }

    int a = input.size();

    int arr[a];
    for(int i = 0; i< a; i++){
        arr[i] = input[i];
    }
    int n = sizeof(arr) / sizeof(int) - 1;
    //
    isHeap(arr, 0, n) ? printf("true") : printf("false");


    return 0;
}

