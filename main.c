#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Pls enter a number:");
    scanf("%d",&x);
    if (x<256)
    printf("small");
    else
    printf("large");
    return 0;
}
