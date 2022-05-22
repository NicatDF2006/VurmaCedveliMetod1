#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 2;
    int c = 2;

    while(i <= 10) {
        while(c <= 10) {
            printf("%d * %d = %d", i, c, i*c);
            c++;
            printf("\n");
        }
        i++;
        c=2;
        printf("\n");
    }
    return 0;
}
