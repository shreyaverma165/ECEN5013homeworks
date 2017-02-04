#include <stdio.h>
#include <stdlib.h>
char reverse(char *str, int length)
    {
      char temp;
      char *var = str;
      char *ptr;
      ptr = var + (length -1);
      while(ptr>var)
      {
          temp = *ptr;
          *ptr-- = *var;
          *var++ = temp;
      }
    }

int main()
{
   char arr[100];
   printf("Enter the string to be reversed:\n");
    gets(arr);
   char *str = arr;
   int length;
   printf("Enter the length:\t");
   scanf("%d", &length);
    reverse(arr, length);
    printf("\nResultant Reversed String : %s", arr);
    return 0;
}
