

#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

void swap_index( int* num1, int* num2) {

	int temp_swap = *num1;
	*num1 = *num2;
	*num2 = temp_swap;
}

void print_array(const int temp_array[], int length_of_array) {
	for (size_t i = 0; i < length_of_array; i++)
	{
		cout << temp_array[i];
		cout << "\n";
	}
}

void initialize_array(int temp_array[], int length_of_array) {
	for (size_t i = 0; i < length_of_array; i++)
	{
		temp_array[i] = (rand() % 100);
	}
}

void insertion_sort(int temp_array[], int length_of_array) {
	for (size_t i = 1; i < length_of_array; i++)
	{
		int j = i;
		while (j>0 && temp_array[j]<temp_array[j-1])
		{
			swap_index(&temp_array[j], &temp_array[j - 1]);
			j--;
		}
	}
}




int main()
{
	srand((unsigned)time(NULL));
	int selection_array[10]{ 0 };
	int length_of_array = sizeof(selection_array) / sizeof(selection_array[0]);

	initialize_array(selection_array, length_of_array);

	print_array(selection_array, length_of_array);

	insertion_sort(selection_array, length_of_array);

	print_array(selection_array, length_of_array);



	return 0;
}

