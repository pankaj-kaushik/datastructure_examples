#include <stdio.h>


//Input : array(1,3,4,5)
//Output: array(5,4,3,1)


void swap(int* first_value, int* second_value)
{
	int temp = *first_value;
	*first_value = *second_value;
	*second_value = temp;
}

void reverse_array(int* ptr, int size)
{
	int start_index = 0;
	int end_index = size - 1;	
	
	while( start_index < end_index )
	{
		swap(&ptr[start_index++], &ptr[end_index--]);
	}
}

void print_array(int*ptr, int size)
{
	int start_index = 0;
	while( start_index < size)
	{
		printf("%d\t", ptr[start_index]);
		start_index++;
	}
}


int main()
{
	int arr[4] = {1, 3, 4, 5};

	printf("Array Before Reversing\n");
	print_array(arr, 4);
	reverse_array(arr, 4);
	printf("\nArray After Reversing\n");
	print_array(arr, 4);
	printf("\n");
	return 0;	
}
