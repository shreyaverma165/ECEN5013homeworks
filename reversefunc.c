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

        printf("\nResultant reversed string is: ");
        for (int i =0; i<length; i++)
   {
       if(*str == '\n')
       printf("\\n");
       else if(*str == '\t')
       printf("\\t");
       else if(*str == '\0')
       printf("\\0");
       else
        printf("%c",*str);
       str++;
   }
    }

int main()
{
   char a1[] = "Does it reverse \n\0\t correctly?";
    reverse(a1, 30);
    char a2[] = "This is a String.";
    reverse(a2, 17);
    char a3[] = "some NUMmbers12345";
    reverse(a3, 18);
    return 0;
}
