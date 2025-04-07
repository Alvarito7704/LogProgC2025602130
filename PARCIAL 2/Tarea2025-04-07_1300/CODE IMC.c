#include <stdio.h>

int main() {
    double p;
    double h;
    double iMC;

    printf("INGRESE EL PESO EN KG\n");
    scanf("%lf", &p);

    printf("INGRESE LA ESTATURA EN M\n");
    scanf("%lf", &h);

    iMC = p / (h * h);

    if (iMC >= 40.0) {
        printf("EL IMC ES DE: %.2f POR LO QUE SE DIAGNOSTICA OBESIDAD FASE 3\n", iMC);
    } else {
        if (iMC >= 35.0) {
            printf("EL IMC ES DE: %.2f POR LO QUE SE DIAGNOSTICA OBESIDAD FASE 2\n", iMC);
        } else {
            if (iMC >= 30.0) {
                printf("EL IMC ES DE: %.2f POR LO QUE SE DIAGNOSTICA OBESIDAD FASE 1\n", iMC);
            } else {
                if (iMC >= 25.0) {
                    printf("EL IMC ES DE: %.2f POR LO QUE SE DIAGNOSTICA SOBREPESO\n", iMC);
                } else {
                    if (iMC >= 18.5) {
                        printf("EL IMC ES DE: %.2f POR LO QUE SE DIAGNOSTICA UN PESO IDEAL\n", iMC);
                    } else {
                        printf("EL IMC ES DE: %.2f POR LO QUE NO ESTA EN EL PESO IDEAL\n", iMC);
                    }
                }
            }
        }
    }

    return 0;
}
