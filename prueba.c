#include <stdio.h>
#include "CEspaniol.h"

entero main(entero argc, caracter** argv) {
        
        caracter hola[] = {'h', 'o', 'l', 'a', '\n', 0};
        corto i = 0;
        mientras (i < 5) {
                printf(hola);
                i++;
        }

        si (i != 0) {
                para (largo j = 0; j < 5; j++) {
                        printf(":) \n");
                }
        }


}