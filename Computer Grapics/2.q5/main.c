#include <stdio.h>
#include <stdlib.h>
void pr(int *a,int *b)
{
    int c;
    c=*a+*b;
    printf("PR: %d\n",c);
}
void pv(int a,int b)
{
    int c;
    c=a+b;
    printf("PV: %d",c);
}
int main()
{
    int a,b;

    scanf("%d",&a);
    scanf("%d",&b);
    pr(&a,&b);
    pv(a,b);
    return 0;
}
