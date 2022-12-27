#include <stdio.h>
 
int main(void)
{
    int a[10];
    int n;
 
    printf("N: ");
    scanf("%i",&n);
 
    int i,num=0;
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }
 
    for (i=2;i<n;++i){
        if ((a[i-2]>a[i-1]) && !(a[i-1]>a[i])){
            ++num;
        }
 
    }
 
    if (a[n-2]>a[n-1]) ++num;
 
    printf("%i \n",num);
    return 0;
}