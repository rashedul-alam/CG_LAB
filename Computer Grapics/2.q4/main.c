#include <stdio.h>
#include <stdlib.h>
void count(char a[50])
{
    int i=0;
    i= strlen(a);
    int j;
    int c=0;
    for(j=0;j<i;j++)
    {
        if(a[j]>='a' && a[j]<='z')
        {


        }
        else if (a[j]>='A' && a[j]<='Z')
        {

        }
        else{
            printf("%c",a[j]);
        }
    }

}
int main()
{
    char a[50];
    gets(a);
    count(a);
    return 0;
}
