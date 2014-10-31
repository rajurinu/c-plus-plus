#include <stdio.h>
#include <string.h>
#include <malloc.h>
 
int main()
{
   char first[100], second[100], *temp;
 
   printf("Enter the first string\n");
   gets(first);
 
   printf("Enter the second string\n");
   gets(second);
 
   printf("\nBefore Swapping\n");
   printf("First string: %s\n",first);
   printf("Second string: %s\n\n",second);
 
   temp = (char*)malloc(100);
 
   strcpy(temp,first);
   strcpy(first,second);
   strcpy(second,temp);
 
   printf("After Swapping\n");
   printf("First string: %s\n",first);
   printf("Second string: %s\n",second);
 
   return 0;
}
