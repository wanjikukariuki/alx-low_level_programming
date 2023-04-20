#include <stdio.h>

int main(void)
{
    printf("Size of int: %d byte(s)\n", sizeof(int));
    printf("Size of float: %d byte(s)\n", sizeof(float));
    printf("Size of double: %d byte(s)\n", sizeof(double));
    printf("Size of char: %d byte(s)\n", sizeof(char));
    printf("size of long int: %d byte(s)\n", sizeof(long int));
    printf("size of long long int: %d byte (s)\n", sizeof(long long int));

    return (0);
}
