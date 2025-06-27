#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 ) return 0;
    else if (n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    printf("nhap so phan tu: ");
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = fibonacci(i);
        printf(" %d ", arr[i]);
    }

    return 0;

}