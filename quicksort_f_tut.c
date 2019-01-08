/* C implementation QuickSort */
#include<stdio.h> 
  
// A utility function to swap two elements 
void swap(int * x, int * y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
    array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
  
    for (int j = low; j <= high- 1; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
 arr[] --> Array to be sorted, 
  low  --> Starting index, 
  high  --> Ending index */
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    
} 
  
// Driver program to test above functions 
int main() 
{ 
    int arr[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    quickSort(arr, 0, n-1); 
    printf("Sorted array: "); 
    printArray(arr, n); 
    return 0; 
} 


////////////////////////////////////////////////////////////


#include <stdio.h>

void erzeugeArray();
void zeigeArrayinConsole();
void dreieckstausch();
int teile(int *, int, int);
void quickSort(int *, int, int);

int main()
{
    return 0;
}

void erzeugeArray(int *x, )

int teile(int *x, int links, int rechts) {
    
    int i=links; int j=rechts-1; int pivot=x[rechts];
    int temp;
    
    do {
        while(x[i]<pivot && i<rechts-1) {
            i++;
        }
        while(x[j]>=pivot && j>links) {
            j--;
        }
        if(i<j) {
            temp=x[i];
            x[i]=x[j];
            x[j]=temp;
            
        }
    } while(i<j);
    if(x[i]>pivot) {
        x[rechts]=x[i];
        x[i] =pivot;
    }

    return i;
}

void quickSort(int *x, int links, int rechts) {
    int teiler = 0;
    if(links < rechts) {
        
    teiler = teile(x, links, rechts);
    quickSort(x, links, rechts);
    quickSort(x, teiler = 1, rechts);
    
    }
}

