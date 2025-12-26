#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "konversihuruf.h"

float hitungIP(char nilaiHuruf[6][3]){
    float nilaiAngka[6];
    float IP = 0;
    int SKS[6];
    int i, totalSKS = 0;

    SKS[0] = 4;
    SKS[1] = 3;
    SKS[2] = 2;
    SKS[3] = 2;
    SKS[4] = 3;
    SKS[5] = 2;

    for (i = 0; i < 6; i++){
        totalSKS = totalSKS + SKS[i];
    }

    for (i = 0; i < 6; i++){
        nilaiAngka[i] = konversiHuruf(nilaiHuruf, i);
        IP = IP + (nilaiAngka[i] * SKS[i]);
    }

    IP = (IP / totalSKS);

    return IP;
}