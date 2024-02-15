#include <stdio.h>
#include <stdlib.h>
#include "sequence_array.h"

int main() {
    int tamanho = 24;
    int *array = build_array(tamanho);
    set_at(array, 2, 3);
    set_at(array, 3, 2);
    printf("The value in 3° position is: %d\n", get_at(array, 2));

    iter_seq(array);

    free(array);
    return 0;
}