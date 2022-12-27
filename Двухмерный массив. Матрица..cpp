#include <stdio.h>
 
int main(void)
{
    int a[10][10];
    int m,n;
 
    printf("M: ");
    scanf("%i",&m);
    printf("N: ");
    scanf("%i",&n);
 
    int i,j;
    for (i=0; i<m; ++i){
        printf("%i : \n", i+1);
        for (j=0; j<n; ++j){
            printf("%i : ", j+1);
            scanf("%i", &a[i][j]);
        }
    }
 
    int j2,i2,chek=1;
    for (i=0; i<m; ++i)
        for (j=0; j<n;++j){
            for (j2=0; ((a[i][j]>a[i][j2]) || (j==j2)) && (j2<n); ++j2);
            if (j2==n) {
                for (i2=0; ((a[i][j]<a[i2][j]) || (i==i2) )&&(i2<m); ++i2);
                if (i2==m) {
                    printf("%i : %i = %i \n", i+1, j+1, a[i][j]);
                    chek=0;
                }
            }
        }
    if (chek) printf("0\n");
    return 0;
}