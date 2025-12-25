#include <stdio.h>
#include <ctype.h>
#include <string.h>

void membacaNilai(char nilai[8][3]) {
    int valid, i, j;

    for (i = 0; i < 8; i++) {
        do {
            valid = 1;
            printf("Nilai Matkul-%d: ", i + 1);
            scanf("%2s", nilai[i]);

            for (j = 0; nilai[i][j] != '\0'; j++) {
                nilai[i][j] = toupper((unsigned char)nilai[i][j]);
            }

            if (strcmp(nilai[i], "A") != 0 &&
                strcmp(nilai[i], "AB") != 0 &&
                strcmp(nilai[i], "B") != 0 &&
                strcmp(nilai[i], "BC") != 0 &&
                strcmp(nilai[i], "C") != 0 &&
                strcmp(nilai[i], "CD") != 0 &&
                strcmp(nilai[i], "D") != 0 &&
                strcmp(nilai[i], "E") != 0) {
                printf("Input tidak valid. Coba lagi.\n");
                valid = 0;
            }
        } while (!valid);
    }
}
