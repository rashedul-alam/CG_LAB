#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,r,i;

    printf("Enter A number:");
    scanf("%d",&r);

    for(int i = 1; i <= r; ++i)
    {
        for(s = 1; s <= r-i; ++s)
        {
            printf(" ");
        }

        for(int k=0;k < 2*i-1;++k)
        {
            printf("*");

        }
        printf("\n");
    }

    return 0;
}
