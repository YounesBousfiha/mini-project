#ifndef MAIN_H
#define MAIN_H

#define MAX 200

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct book {
    char titre[MAX];
    char auteur[MAX];
    int quantite;
    float prix; 
}Book_t;

#endif /* MAIN_H */