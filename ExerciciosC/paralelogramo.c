#include <stdio.h>
#include <math.h>

typedef struct {
    float ladoA;
    float ladoB;
    float angulo;
    float perimetro;
    float area;
} Paralelogramo;

void paralelogramoInit(Paralelogramo *para) {
    printf("Entre com os lados: ");
    scanf("%f %f", &para->ladoA, &para->ladoB);
    printf("Entre com o ângulo (graus): ");
    scanf("%f", &para->angulo);
}

void calcularPerimetro(Paralelogramo *para) {
    para->perimetro = 2 * (para->ladoA + para->ladoB);

}

void calcularArea(Paralelogramo *para) {
    para->area = para->ladoA * para->ladoB * (sin(para->angulo * M_PI / 180));

}

void comparaArea(Paralelogramo *para1, Paralelogramo *para2) {
    if (para1->area > para2->area) {
        printf("A área do primeiro paralelogramo é maior!\n");
    } else if (para2->area > para1->area) {
        printf("A área do segundo paralelogramo é maior!\n");
    } else {
        printf("As áreas são iguais!\n");
    }
}

int main() {
    Paralelogramo paralelogramo[2];

    for (int i = 0; i < 2; i++) {
        paralelogramoInit(&paralelogramo[i]);
        calcularPerimetro(&paralelogramo[i]);
        calcularArea(&paralelogramo[i]);

        printf("Perimetro: %.2f\n", paralelogramo[i].perimetro);

        printf("Área: %.2f\n", paralelogramo[i].area);
    }

    comparaArea(&paralelogramo[0], &paralelogramo[1]);
    
    return 0;
} 