#include <stdio.h>
int main() {
    int r, c, i, j, max;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int m[r][c];
    printf("Enter elements:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &m[i][j]);

    max = m[0][0];
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            if(m[i][j] > max) max = m[i][j];

    printf("Max element = %d\n", max);
    return 0;
}
