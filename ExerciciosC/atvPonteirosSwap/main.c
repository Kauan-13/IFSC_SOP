#include <stdio.h>
#include "ex.h"

int main() {
    int x = 10, y = 20;

    printf("antes\n");
    printf("%p: %d\n", &x, x);
    printf("%p: %d\n", &y, y);

    swap(&x, &y); 

    printf("depois\n");
    printf("%p: %d\n", &x, x);
    printf("%p: %d\n", &y, y);

    return 0;
}