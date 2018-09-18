#include <stdio.h>
int main(void)
{
    int sum=10;
    int k=0;

    while (k<5)
    {
        sum= sum+k;
        k++;
    }
    printf("sum = %d\n", sum);



    for (k=9; k>0; k--) {
        printf("%d\n", k);
    }



}

