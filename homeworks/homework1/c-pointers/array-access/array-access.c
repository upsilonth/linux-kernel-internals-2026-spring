#include <stdio.h>

int main() {
    double x[3];
    int *p = (int *)&x[0]; 
    printf("%d\n", *(p + 1));
    
    return 0;
}
