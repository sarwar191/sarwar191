//Cse-19-37

#include <stdio.h>
int main() 
{
    int a, b,result=1,i=1;
    printf("Enter a base number: ");
    scanf("%d", &a);
    printf("Enter an exponent: ");
    scanf("%d", &b);
    while (i<=b)
   {
        result=result* a;
        i++;
    }
    printf("Answer = %d", result);
    return 0;
}
