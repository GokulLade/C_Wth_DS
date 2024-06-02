#include <stdio.h>
void main()
{
    printf("\a Gokul lade\n"); //==> \a(Deep sound) \n(new line)

    printf("Gokul\b lade\n"); //==> \b(Black slash)

    printf("Gokul lade \f \n"); //==> \f(form feed)

    printf("Gokul \rlade \n"); //==> \r(carriage return)

    printf("Gokul\t lade \n"); //==> \t(tap between two word)

    printf("Gokul\v lade \n"); //==> \v(Vertical tap)

    printf("Gokul\\b lade \n"); //==> \(Display a backslash charater)

    printf("\"Gokul lade\" \n"); //==> \"(Display the " " in printf)

    printf("\?Gokul lade\? \n"); //==> \?(Display the \?)

    printf("c\\turbo3\\c-programs \n"); //==> \\(use to print the \)

    printf("Gokul\0lade \n"); //==> \0(Work as fullStop(.) End the string)
}