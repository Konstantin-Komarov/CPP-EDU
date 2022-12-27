#include <stdio.h>
int main(void)
{
    int A;
    printf("A:");
    scanf ("%i", &A);
    printf("%i\n",(A%1000)/100);
    return 0;
}