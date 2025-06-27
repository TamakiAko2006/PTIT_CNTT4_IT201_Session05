#include <stdio.h>

void print1toN(int n){
    if(n==0){
        return;
    }
    print1toN(n-1);
    printf("%d ",n);
}

int main(){
    int n;
    printf("nhap vao mot so nguyen duong: ");
    scanf("%d",&n);

    if(n>0){
        printf("cac so tu 1 den %d la: ",n);
        print1toN(n);
    } else {
        printf("vui long nhap vao mot so nguyen duong: ");
    }
    return 0;
}