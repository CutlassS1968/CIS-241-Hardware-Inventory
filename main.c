#include <stdio.h>

int main() {

    FILE * fPtr = NULL;
    fPtr = fopen("hardware.dat", "w");

    if (fPtr == NULL) {
        printf("Unable to create file.\n");
        return 1;
    }

    fputs("3, Electric sander, 7, 57.98\n", fPtr);
    fputs("17, Hammer, 76, 11.99\n", fPtr);
    fputs("24, Jig saw, 21, 11.00\n", fPtr);
    fputs("39, Lawn mower, 3, 79.50\n", fPtr);
    fputs("56, Power saw, 18, 99.99\n", fPtr);
    fputs("68 Screwdriver, 106, 6.99\n", fPtr);
    fputs("77, Sledge hammer, 11, 21.50\n", fPtr);
    fputs("83, Wrench, 34, 7.50", fPtr);

    fclose(fPtr);
    return 0;
}