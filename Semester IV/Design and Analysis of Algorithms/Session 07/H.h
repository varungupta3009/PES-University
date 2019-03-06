//Header file for session7_sort.c

typedef struct Record {
	long int serialnumber;
	int score;
} Record;

//Insertion Sort
//Sorts the array of Records on the serialnumber field using the Insertion Sort algorithm.
//Sorts the array A in-place and returns the comparison count.
long int InsertionSort(Record* A, int n);

//Bubble Sort
//Sorts the array of Records on the serialnumber field using the Bubble Sort algorithm.
//Sorts the array A in-place and returns the comparison count.
long int BubbleSort(Record* A, int n);

//Selection Sort
//Sorts the array of Records on the serialnumber field using the Selection Sort algorithm.
//Sorts the array A in-place and returns the comparison count.
long int SelectionSort(Record* A, int n);

//Merge Sort
//Sorts the array of Records on the serialnumber field using the Merge Sort algorithm.
//Sorts the array A in-place and returns the comparison count.
long int MergeSort(Record* A, int lo, int hi);

//Quick Sort
//Sorts the array of Records on the serialnumber field using the Quick Sort algorithm.
//Sorts the array A in-place and returns the comparison count.
long int QuickSort(Record* A, int lo, int hi);

void Merge(Record* A, int l, int m, int r);
int Partition(Record *A, int lo, int hi);
