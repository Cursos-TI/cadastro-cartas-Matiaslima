#include <stdio.h>

int main() {

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA, valorTotalB;

    printf("Produto %s tem estoque %u e o valor unitario é %f", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitario é %f", produtoB, estoqueB, valorB);

    return 0;
} 