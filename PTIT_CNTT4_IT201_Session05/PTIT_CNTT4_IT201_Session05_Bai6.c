#include <stdio.h>

int sumArr(int arr[],int n) {
    if (arr==NULL) return 0;
    if (n < 1)
        return 0;
    return arr[n-1] + sumArr(arr,n-1);
}

int main() {
    int n;
    printf("nhap so phan tu: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        printf("nhap phan tu: ");
        scanf("%d",&arr[i]);
    }

    if (n >0 ) {
        int sum = sumArr(arr,n);
        printf("tong cua cac phan tu la: %d",sum);
    } else {printf("khong hop le");}
}