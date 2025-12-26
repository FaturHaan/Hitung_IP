#include <stdio.h>
#include <ctype.h>
#include <string.h>

float konversiHuruf(char nilaiHuruf[6][3], int idx){
    float angka;
    if (strcmp(nilaiHuruf[idx], "A") == 0){
        angka = 4;
    }
    if (strcmp(nilaiHuruf[idx], "AB") == 0){
        angka = 3.5;
    }
    if (strcmp(nilaiHuruf[idx], "B") == 0){
        angka = 3;
    }
    if (strcmp(nilaiHuruf[idx], "BC") == 0){
        angka = 2.5;
    }
    if (strcmp(nilaiHuruf[idx], "C") == 0){
        angka = 2;
    }
    if (strcmp(nilaiHuruf[idx], "CD") == 0){
        angka = 1.5;
    }
    if (strcmp(nilaiHuruf[idx], "D") == 0){
        angka = 1;
    }
    if (strcmp(nilaiHuruf[idx], "E") == 0){
        angka = 0;
    }
    return angka;
}