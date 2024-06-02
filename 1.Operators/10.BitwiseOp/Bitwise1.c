#include <stdio.h>
void main()
{
    printf("%d\n", (16 & 32)); // Bitwise AND

    printf("%d\n", (46 & 25)); // Bitwise AND

    printf("%d\n", (27 | 10)); // Bitwise OR

    printf("%d\n", (33 | 17)); // Bitwise OR

    printf("%d\n", (~9)); // compliment

    printf("%d\n", (25 << 10)); // Left shift

    printf("%d\n", (36 >> 12)); // Right shift

    printf("%d\n", (45 >> 4)); // Right shift

    printf("%d\n", (55 >> 16)); // Right shift

    printf("%d\n", (-2 << 2)); // Right shift
}