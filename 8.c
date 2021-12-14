//cse-19-37

#include <stdio.h>
void hexaconvert(int);
 int main()
{
    int num;
      printf("Enter decimal number: ");
      scanf("%d", &num);
      hexaconvert(num);
   
    return 0;
}
void hexaconvert(int num)
{
	 int i,j = 0 ,q,r;
    char hexadecimalnum[100];
    q = num;
    while (q != 0)
    {
     r = q% 16;
        if (r < 10)
            hexadecimalnum[j++] = 48 + r;
        else
            hexadecimalnum[j++] = 55 + r;
        q = q / 16;
    }
     for (i = j; i >= 0; i--)
        printf("%c", hexadecimalnum[i]);
}
