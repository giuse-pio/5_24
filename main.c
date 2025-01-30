#include <stdio.h>

void elimina(int v[], int n, int i);

int main(void) {
    int n = 5;
    int m = 2 * n;
    int array1[n];
    int array2[n];
    int array3[m];
    printf("inserire i valori del primo array\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }
    printf("inserire i valori del secondo array\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array2[i]);
    }
    for (int i = 0; i < n; i++) {
        array3[i] = array1[i];
    }
    for (int i = 0; i < n; i++) {
        array3[i + n] = array2[i];
    }
    printf("primo array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array1[i]);
    }
    printf("\nsecondo array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array2[i]);
    }
    for (int i = 0; i < m; i++) {
        for (int k = i + 1; k < m;) {
            if (array3[i] == array3[k]) {
                elimina(array3, m, k);
                m--;
            } else {
                k++;
            }
        }
    }
    printf("\nterzo array: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", array3[i]);
    }

    return 0;
}

void elimina(int v[], int n, int i) {
    for (int j = i; j < n; j++) {
        v[j] = v[j + 1];
    }
}
