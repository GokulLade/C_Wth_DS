#include <stdio.h>
void main()
{
    printf("%c + %c =%c\n", 1, 2, 3); //=> print the ASCII value character

    printf("%d\n", 5.5); //=> If in case if the last digit is 0 and 5 then answer is = 0(zero) other wise answer is garbage
    printf("%d\n", 5.23);
    printf("%d", 5.0);

    printf("Address of Gokul = %u\n", "Gokul");
    printf("Gokul" + 1); //=> Address of string value +1 means remove first character
}