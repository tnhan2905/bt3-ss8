#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);
    int mang[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            mang[i][j] = n;
    printf("Ma tran vuong %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", mang[i][j]);
        printf("\n");
    }
    return 0;
}
