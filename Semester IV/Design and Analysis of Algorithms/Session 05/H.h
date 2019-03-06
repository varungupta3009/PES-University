//Header file for session5_mergesort_binsearch.c

typedef struct Data {
	int id;
	int value;
} Data;

//Merge Sort
//Use Merge Sort algorithm to sort the array of length with respect to their values.
void MergeSort(Data* arr, int l, int r);

//Binary Search
//Returns the index of one of the records of A which matches key_value with 'value'
int BinarySearch(Data *A, int l, int r, int k);
