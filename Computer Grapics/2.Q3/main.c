#include <stdio.h>
#include <stdlib.h>
void pri(int a[2][2])
{
     int i,j;
    for(i=0;i<2;i++)
    {

        for(j=0;j<2;j++)
        {
            printf("%d",a[i][j]);
        }
    }

}
int main()
{
    int a[2][2];
    int i,j;
    for(i=0;i<2;i++)
    {

        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    pri(&a);
    return 0;
}
