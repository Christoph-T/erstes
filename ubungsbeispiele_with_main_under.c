#include <stdio.h>

int createArray(int *array, int length)
{
  for(int i = 0; i < length; i++) {
      
      array[i] = rand()%100;
      
  }
}

int showArrayinConsole(int *array, int length)
{
    for(int i = 0; i < length; i++) {
        
        printf("%d ", array[i]);
    }
    
}

int rekArray(int * array, int length)
{
    for(int i = length-1; i>=0; i--) {
        
        printf("%d ", array[i]);
    }
}

int sumArray(int * array, int length)
{
    int summe = 0;
    for(int i = 0; i < length; i++) {
        
         summe = summe + array[i];
         
         
    }
printf("\nSumme: %d", summe);
    
}
    
int mittelArray(int * array, int length)
{
    int summe = 0;
    int mittelwert = 0;
    for(int i = 0; i < length; i++) {
        
         summe = summe + array[i];
    }
  
    mittelwert = summe/length;
    printf("\nMittelwert: %d", mittelwert);
    
    
}

int ausreisermittelwert(int * array, int length)
{
    int summe = 0;
    int mittelwert = 0;
    for(int i = 0; i < length; i++) {
        
         summe = summe + array[i];
    }
  
    mittelwert = summe/length;
    
    printf("\nAureiser Array: ");
    
    for(int i = 0; i < length; i++) {
        
        if(array[i] > mittelwert*1.20) {
            array[i] = mittelwert;
        }
        
        if(array[i] < mittelwert*0.80) {
            
            array[i] = mittelwert;        
        }
        printf("%d ", array[i]);
    }
}

int minmaxArray(int *array, int length) {
    
    int max = array[0];
    int min = max;
    
    for(int i = 0; i < length; i++) {
        
        if(array[i] < min) {
            
            min = array[i];
        }
        if(array[i] > max) {
            
            max = array[i];
        }
        
    }
    
    printf("\nGrößte Zahl: %d", max);
    printf("\nKleinste Zahl: %d", min);
}

int counterdigit(int *array, int length)
{
    int onedigit = 0;
    int twodigit = 0;
    int others = 0;
    for(int i = 0; i < length; i++) {
        
        if(array[i] < 10) {
            onedigit++;
        }
        
        if(array[i] >= 10 && array[i] <= 99) {
            
            twodigit++;
        }
        
        if(array[i] >= 100) {
            
            others++;
        }
    }
    
    printf("\nEinstellig: %d", onedigit);
    printf("\nZweistellig: %d\n", twodigit);
    printf("Andere: %d", others);
}
int main()
{
    int length = 100;
    int showArray[length];
   
    
    createArray(showArray, length);
    printf("Zeige mir dein Array: \n");
    showArrayinConsole(showArray, length);
    printf("\nZeige mir das umgekehrte Array: \n");
    rekArray(showArray, length);
    sumArray(showArray, length);
    mittelArray(showArray, length);
    ausreisermittelwert(showArray, length);
    minmaxArray(showArray, length);
    counterdigit (showArray, length);
  
}
