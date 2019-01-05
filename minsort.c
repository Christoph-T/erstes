#include <stdio.h>
void erzeugeArray(int *, int );
void printArray(int *, int);
void dreieckstausch(int *, int *);
int MinSort(int *, int);

int main() 
{ 
    int anz = 5;
    int z[anz];
    
    erzeugeArray(z, anz);
    printf("Unsortiere Zahlen: \n");
    printArray(z, anz); 
    MinSort(z, anz); 
    printf("Sortierte Zahlen: \n"); 
    printArray(z, anz); 
    return 0; 
} 

void erzeugeArray(int * arr, int anz)
{
   srand();    
   for(int i = 0; i < anz; i++) {
   arr[i] = rand()%100;
   }
}

void printArray(int * arr, int anz) 
{ 
    int i; 
    for (i=0; i < anz; i++) 
        printf("%d ", arr[i]); 
        printf("\n"); 
} 

void dreieckstausch(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
int MinSort(int * arr, int anz) 
{ 
    int i, j, min_position; 
  
    for (i = 0; i < anz-1; i++) 
    { 
        min_position = i; 
        for (j = i+1; j < anz; j++) 
          if (arr[j] < arr[min_position]) 
            min_position = j; 
  
        dreieckstausch(&arr[min_position], &arr[i]); 
    } 
} 
  
