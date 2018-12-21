#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("Enter a Character : ");
    scanf("%c",&a);
    if(a >= 'a' && a <= 'z')
    {
        printf("\nThis '%c' Character is in Lowercase.\n", a);
    }
    else if(a >= 'A' && a <= 'z')
    {

        printf("\nThis '%c' Character is in Uppercase.\n",a);
    }
    else
    {
        printf("\nThis '%c' is not a Character.\n",a);
    }
    return 0;
}
