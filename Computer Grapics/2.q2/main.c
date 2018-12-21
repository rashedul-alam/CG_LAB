#include <stdio.h>
#include <stdlib.h>

struct va
{
    int a;
    int b;

};

void add(struct va c)
{
    int e;
    e=c.a+c.b;
    printf("SUM :%d",e);
}
int main()
{
    struct va a1;
    scanf("%d",&a1.a);
    scanf("%d",&a1.b);

    add(a1);


    return 0;
}
