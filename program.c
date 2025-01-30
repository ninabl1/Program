#include <stdio.h>
#define MAX 100

void unesiMatricu(int m[][MAX], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);
}

void ispisiMatricu(int m[][MAX], int n) {
    for (int i = 0; i < n; i++, printf("\n"))
        for (int j = 0; j < n; j++)
            printf("%d ", m[i][j]);
}

int main() {
    int n, m[MAX][MAX];
    scanf("%d", &n);
    unesiMatricu(m, n);
    ispisiMatricu(m, n);
    printf("\n");
    for (int i = 0; i < n; i++, printf("\n"))
        for (int j = 0; j < n; j++)
            printf("%d ", m[j][i]);
    return 0;
}