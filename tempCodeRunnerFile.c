#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "bacanilai.h"
#include "hitungIP.h"
#include "tampilIP.h"

int main(){
    char nilaiHuruf[6][3];
    float IP;
    
    bacaNilai(nilaiHuruf);
    IP = hitungIP(nilaiHuruf);
    tampilIP(IP);
    
    return 0;
}