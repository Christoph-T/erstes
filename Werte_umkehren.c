#include <stdio.h>
#include <string.h>
void StrReverse(char *str)
{
    int i, j, len;
    char temp;
    i=j=len=temp=0;
    
    len=strlen(str);
    for(i=0, j=len-1; i<=j; i++, j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}


int main()
{
    char a[] ="Test1234ABC";
    //printf("%s", return_and_pass(a);
    printf("original:\t%s\n", a);
    StrReverse(a);
    printf("umgedreht: \t%s\n", a);
    return 0;
}
