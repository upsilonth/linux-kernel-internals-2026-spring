#include <stdio.h>

int main() {
    char x[10] = "123456789";
    double *p = (double *)&x[1]; 
    printf("%f\n", *(p));
    
    return 0;
}
