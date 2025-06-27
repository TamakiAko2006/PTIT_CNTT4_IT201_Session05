#include <stdio.h>

int tinhgiaithua(int n) {
    if (n == 1)
    return 1;
    return n * tinhgiaithua(n-1);
}

int main() {
    int n;
    printf("nhap so nguyen duong muon tim gia thua: ");
    scanf("%d", &n);

    if (n>0) {
        printf("giai thua cua %d la %d", n, tinhgiaithua(n));
    } else {printf("khong hop le");}
    return 0;
}