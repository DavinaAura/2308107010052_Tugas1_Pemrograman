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
    
Program ini ditulis dalam bahasa pemrograman C.
Berikut penjelasan singkat tentang cara program ini berfungsi:
Program meminta pengguna untuk memilih menu konversi bilangan.
Pengguna memasukkan pilihan (1-4) sesuai dengan menu yang tersedia.
Berdasarkan pilihan pengguna, program akan menjalankan operasi konversi yang sesuai:
Jika pengguna memilih 1, program akan meminta pengguna memasukkan bilangan desimal dan kemudian mengonversinya menjadi bilangan biner.
Jika pengguna memilih 2, program akan meminta pengguna memasukkan bilangan biner dan kemudian mengonversinya menjadi bilangan desimal.
Jika pengguna memilih 3, program akan meminta pengguna memasukkan bilangan desimal dan kemudian mengonversinya menjadi bilangan oktal.
Jika pengguna memilih 4, program akan meminta pengguna memasukkan bilangan oktal dan kemudian mengonversinya menjadi bilangan desimal.
Setelah operasi konversi selesai dilakukan, program akan mencetak hasil konversi sesuai dengan pilihan pengguna.

Program ini menggunakan struktur switch-case untuk menangani pemilihan menu konversi dan operasi yang sesuai. Setiap kasus switch-case mengimplementasikan algoritma konversi yang sesuai dengan jenis bilangan yang akan dikonversi.
Program ini ditulis dalam bahasa C, yang merupakan bahasa pemrograman tingkat rendah dan populer untuk pengembangan sistem dan aplikasi.

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

Berikut adalah penjelasan singkat tentang cara program ini bekerja:

Program meminta pengguna untuk memasukkan tahun dalam format 4 digit.
Program membaca input tahun dari pengguna menggunakan fungsi scanf.
Program memvalidasi apakah input yang dimasukkan adalah angka dengan panjang 4 digit.
Jika input valid, program mengonversi input dari string ke integer menggunakan fungsi atoi.
Program memeriksa apakah tahun tersebut merupakan tahun kabisat dengan memanggil fungsi isLeapYear.
Jika tahun tersebut adalah tahun kabisat, program mencetak pesan bahwa tahun tersebut adalah tahun kabisat.
Jika tahun tersebut bukan tahun kabisat, program mencetak pesan bahwa tahun tersebut bukan tahun kabisat.
Jika input tidak valid (bukan angka atau tidak 4 digit), program mencetak pesan kesalahan.
Program akan terus berjalan hingga pengguna memasukkan input yang valid dan keluar dari loop dengan pernyataan break.
Program ini ditulis dalam bahasa pemrograman C. Untuk membuatnya, Anda dapat menggunakan berbagai editor teks atau Integrated Development Environment (IDE) yang mendukung bahasa C, seperti Visual Studio Code, Code::Blocks, Dev-C++, dan sebagainya. Kemudian, program tersebut dikompilasi menggunakan kompiler C, seperti GCC (GNU Compiler Collection), yang tersedia di berbagai sistem operasi, termasuk Linux, macOS, dan Windows.






            
