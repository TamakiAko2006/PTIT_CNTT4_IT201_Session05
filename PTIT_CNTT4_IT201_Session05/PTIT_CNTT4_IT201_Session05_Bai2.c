#include <stdio.h>

int sumnumber(int n) {
    if (n == 1)
        return 1;
    return n + sumnumber(n - 1);
}

int main() {
    int n;
    printf("nhap so nguyen duong: ");
    scanf("%d", &n);
    if (n>0) {
        printf("tong cua %d la %d", n, sumnumber(n));
    } else {printf("so khong hop le");}


    return 0;
}