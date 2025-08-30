#include <stdio.h>
#include <string.h> 

int inverter(char *str) {
    char aux[strlen(str)];

    for (int i = 0; str[i] != 0 ; i++) {
        aux[i] = str[strlen(str) - 1 - i]; 
    }

    printf("%s (Tamanho: %d)\n", aux, (strlen(str)));

    return 0;
} 

int main(int argc, char *argv[]) {
    
    for (int i = 1; i < argc; i++) {
        inverter(argv[i]);
    }
    
    return 0;
} 