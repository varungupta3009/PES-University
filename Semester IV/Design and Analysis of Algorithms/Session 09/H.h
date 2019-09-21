/*
"Can it be that this is he?
 Heavens, is it she?"
*/

typedef struct Data {
	int id;
	int value;
} Data;

//Heap Sort
//Use Heap Sort algorithm to sort the array an of records by their id.
void HeapSort(Data* A, int n);

//Construction of Heap from Bottom-up
void HeapBottomUp(Data * A, int n);