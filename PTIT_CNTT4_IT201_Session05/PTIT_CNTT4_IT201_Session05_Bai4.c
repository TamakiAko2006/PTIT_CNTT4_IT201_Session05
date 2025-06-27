#include <stdio.h>

int sumFirstnumSecnum(int a,int b) {
    if (a > b)
        return 0;
    return a + sumFirstnumSecnum(a + 1,b);
}

int main() {
    int a,b;
    printf("nhap so phan tu cho a va b: ");
    scanf("%d %d",&a,&b);

    if (a > 0 && b > 0 && a <= b) {
        int sum = sumFirstnumSecnum(a,b);
        printf("%d",sum);
    } else {printf("khong hop le");}
    return 0;
}
