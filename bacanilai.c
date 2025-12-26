#include <stdio.h>
#include <ctype.h>
#include <string.h>

void bacaNilai(char nilaiHuruf[6][3]) {
    int valid, i, j;

    for (i = 0; i < 6; i++) {
        do {
            valid = 1;
            printf("Nilai Matkul-%d: ", i + 1);
            scanf("%2s", nilaiHuruf[i]);

            for (j = 0; nilaiHuruf[i][j] != '\0'; j++) {
                nilaiHuruf[i][j] = toupper((unsigned char)nilaiHuruf[i][j]);
            }

            if (strcmp(nilaiHuruf[i], "A") != 0 &&
                strcmp(nilaiHuruf[i], "AB") != 0 &&
                strcmp(nilaiHuruf[i], "B") != 0 &&
                strcmp(nilaiHuruf[i], "BC") != 0 &&
                strcmp(nilaiHuruf[i], "C") != 0 &&
                strcmp(nilaiHuruf[i], "CD") != 0 &&
                strcmp(nilaiHuruf[i], "D") != 0 &&
                strcmp(nilaiHuruf[i], "E") != 0) {
                printf("Anda salah memasukkan nilai. Coba lagi.\n");
                valid = 0;
            }
        } while (!valid);
    }
}
