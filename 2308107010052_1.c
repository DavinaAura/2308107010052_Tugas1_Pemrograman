#include <stdio.h>
int main(){
    int choice, decimal, binary, octal;
    printf("Menu Konversi Bilangan\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");
    printf("Pilih menu (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
         printf("Masukkan bilangan desimal: ");
         scanf("%d", &decimal);
         printf("Biner: ");

        while (decimal > 0) {
            printf("%d", decimal % 2);
            decimal /= 2;   
    }
    break;

    case 2:
        printf("Masukkan bilangan biner: ");
        scanf("%d", &binary);
        decimal = 0;
        int base = 1;

    while (binary > 0) {
        int rem = binary % 10;
        decimal += rem * base;
        binary /= 10;
        base *= 2;
    }

    printf("Desimal: %d", decimal);
    break;

    case 3:
        printf("Masukkan bilangan desimal: ");
        scanf("%d", &decimal);
        printf("Octal: %o", decimal);
        break;
    
    case 4:
        printf("Masukkan bilangan octal: ");
        scanf("%o", &octal);
        printf("Desimal: %d", octal);
        break;

    default:    
        printf("Pilihan tidak valid.");
    }
    return 0;
}
    



            