#include <stdio.h>
#include <string.h>

int main() {
    char INGREDIENTE[20];
    char PIZZA[20];

    printf("COMO SERA SU PIZZA?\n");
    scanf("%s", PIZZA);

    if (strcmp(PIZZA, "VEGETARIANA") == 0) {
        printf("QUE INGREDIENTE LLEVARA?\n");
        scanf("%s", INGREDIENTE);

        if (strcmp(INGREDIENTE, "PIMIENTO") == 0) {
            printf("SU PIZZA ES VEGETARIANA Y LLEVARA MOZARELLA, TOMATE Y PIMIENTO\n");
        } else if (strcmp(INGREDIENTE, "TOFU") == 0) {
            printf("SU PIZZA ES VEGETARIANA Y LLEVARA TOFU, MOZARELLA Y TOMATE\n");
        }
    } else if (strcmp(PIZZA, "NO_VEGETARIANA") == 0) {
        printf("QUE INGREDIENTE LLEVARA?\n");
        scanf("%s", INGREDIENTE);

        if (strcmp(INGREDIENTE, "PEPPERONI") == 0) {
            printf("SU PIZZA LLEVARA PEPPERONI, MOZARELLA Y TOMATE\n");
        } else if (strcmp(INGREDIENTE, "JAMON") == 0) {
            printf("SU PIZZA LLEVARÁ JAMON, MOZARELLA Y TOMATE\n");
        } else if (strcmp(INGREDIENTE, "SALMON") == 0) {
            printf("SU PIZZA LLEVARÁ SALMON, MOZARELLA Y TOMATE\n");
        }
    }

    return 0;
}
