#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int number;
    
        // membaca input bilangan
    scanf("%d", &number);
    if(number % 2 == 0){
        printf("Genap");
    }else {
        printf("Ganjil");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}