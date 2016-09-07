/*
 ============================================================================
 Name        : findElement.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// C program to find the element that appears only once

// A Binary Search based function to find the element
// that appears only once
void search(int *arr, int low, int high)
{
	// Base cases
	if (low > high)
	return;

	if (low==high)
	{
		printf("The required element is %d ", arr[low]);
		return;
	}

	// Find the middle point
	int mid = (low + high) / 2;

	// If mid is even and element next to mid is
	// same as mid, then output element lies on
	// right side, else on left side
	if (mid%2 == 0)
	{
		if (arr[mid] == arr[mid+1])
			search(arr, mid+2, high);
		else
			search(arr, low, mid);
	}
	else // If mid is odd
	{
		if (arr[mid] == arr[mid-1])
			search(arr, mid+1, high);
		else
			search(arr, low, mid-1);
	}
}

// Driver program
int main()
{
	int arr[] = {1, 1, 4, 4, 5, 5, 6, 6, 8};
	int len = sizeof(arr)/sizeof(arr[0]);
	search(arr, 0, len-1);
	return 0;
}
