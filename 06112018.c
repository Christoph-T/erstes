#include <stdio.h>

int counterup(int length)

    {
        int i;

        for(i=0; i <= length; i++)
        {
            printf("Counter: %d\n", i);
        }
        return 0;
    }
    
int counterrekusiv(int counter)
{
    if(counter)
    {
        counterrekusiv(counter-1);
    }
    
    printf("%d\n", counter);
}
int main()
{
    counterup(10);
    int length;
    int counter = 7;
    counterrekusiv(counter);
    
    return 0;
}
