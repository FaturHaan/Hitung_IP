#include <stdio.h>
#include <ctype.h>
#include <string.h>

void tampilIP(float IP){
    if (IP >= 3.6){
        printf("Nilai IP = %.2f (Hebat .. Selamat)", IP);
    } else if (IP < 3.6 && IP >= 2.75){
        printf("Nilai IP = %.2f (Lanjutkan...!)", IP);
    } else if (IP < 2.75 && IP >= 2.0){
        printf("Nilai IP = %.2f (Berjuang Terus...!)", IP);
    } else if (IP < 2.0){
        printf("Nilai IP = %.2f (Waspada!)", IP);
    }
}
