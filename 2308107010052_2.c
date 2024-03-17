#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else

        return 0;
}

int main() {
    char input[5];
    int year;

    do {
        printf("Masukkan tahun (4 digit): ");
        scanf("%s", input);

        int i;
        int valid = 1;
        for (i = 0; i < 4; i++) {
            if (!isdigit(input[i])) {
                valid = 0;
                break;
            }
        }

        if (valid) {
            year = atoi(input);
            if (year < 1000 || year > 9999) {
                printf("Tahun harus berupa 4 digit angka.\n");

            } else {
                if (isLeapYear(year)) {
                    printf("%d adalah tahun kabisat.\n", year);
                } else {
                    printf("%d bukan tahun kabisat.\n", year);
                }
                break;
            }
        } else {
            printf("Input harus berupa angka.\n");
        }

    } while (1);

    return 0;
}
