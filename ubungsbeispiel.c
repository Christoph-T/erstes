#include <stdio.h>

int main()
{
    int length = 100;
    int array[length];
    int summe = 0;
    int mittelwert = 0;
    
    for(int i=0; i < length; i++) {
        array[i]=rand()%100;
    }
    
    printf("\nZahlen:\n ");
    for(int k=0; k<length; k++){
        printf("%d ", array[k]);
    }
    
    printf("\n1)Zahlen umgekehrt:\n ");
    for(int j=length-1; j>=0; j--){
        printf("%d ", array[j]);
    }
    
    printf("\n2)Summe:\n ");
    for(int x=0; x<length; x++){
        summe = summe + array[x];
    }

    printf("%d", summe);
    mittelwert = summe/length;
    printf("\n2)Mittelwert:\n %d\n", mittelwert);
    
    /*printf("\nZahlen:\n");
    for(int z = 0; z < length; z++) {
        float multi = 1.20;
        float bedingung = array[z]*multi;
        if(array[z] > mittelwert*1.20) {
            
            array[z] = mittelwert;
            
            
        }
       if(array[z] < mittelwert*0.80) {
           array[z] = mittelwert;
       } 
       
       printf("%d ", array[z]);
    }*/

    int max = array[0];
    int min = max;
    for(int u = 0; u < length; u++) {
  
       if(array[u] > max) {
          max = array[u];
        }    
       
       if(array[u] < min) {
          min = array[u];
        } 
     
    }
    printf("4)Größte Zahl aus Array:\n");
    printf(" %d\n", max);
    printf("4)Kleinste Zahl aus Array:\n");
    printf(" %d ", min);
    
    
}
