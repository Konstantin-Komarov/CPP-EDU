#include <stdio.h>
int main(void)
{
   int a1, a2, a3;
   printf("1:");
   scanf ("%i", &a1);
   printf("2:");
   scanf ("%i", &a2);
   printf("3:");
   scanf ("%i", &a3);
   if (a2==a3)  printf("%i\n",1);
   else if (a1==a3) printf("%i\n",2);
   else printf("%i\n",3);
   return 0;
}