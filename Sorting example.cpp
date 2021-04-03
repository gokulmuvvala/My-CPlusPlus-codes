// C program to sort an array with 0, 1 and 2
#include <stdio.h>
// Function to swap *a and *b
void swap(int* a, int* b);

// Sort the input array, the array is assumed to
// have values in {0, 1, 2}
void sort(int a[], int arr_size)
{
    // here we are considering 3 variables low,high,mid
	int low = 0;    // initially low is 0
	int high = arr_size - 1; // high consists of array size-1
	int mid = 0; //initially mid is 0
//
	while (mid <= high) {
		switch (a[mid]) {
		case 0:
			swap(&a[low++], &a[mid++]);
			break;
		case 1:
			mid++;
			break;
		case 2:
			swap(&a[mid], &a[high--]);
			break;
		}
	}
}

/* UTILITY FUNCTIONS */
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Utility function to print array arr[]
void printArray(int arr[], int arr_size)
{
	int i;
	for (i = 0; i < arr_size; i++)
		printf("%d ", arr[i]);
	printf("n");
}

/* driver program to test */
int main()
{
	int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	int i;

	sort(arr, arr_size);

	printf("array after segregation\n");
	printArray(arr, arr_size);

	getchar();
	return 0;
}

