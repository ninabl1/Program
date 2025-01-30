#include <stdio.h>

int main(void)
{
    int m;
    printf("Unesite dimenziju kvadratne matrice(m*m): ");
    scanf("%d", &m);
    
    int iMatrica[m][m];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("iMatrica [%d,%d] ---> ", i, j);
            scanf("%d", &iMatrica[i][j]);
        }
    }
    
    printf("\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = m - 1; j >= 0; j--)
        {
            printf("%d ", iMatrica[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
