#include <stdio.h>

int Palindrome(char str[],int left,int right) {
    if (left >= right)
        return 1;
    if (str[left] != str[right])
    return Palindrome(str,left+1,right-1);
}

int main() {
    char str[100];
    int left = 0,right = 0;
    printf("nhap chuoi bat ky:");
    scanf("%s",str);

    if (Palindrome(str,left,right)) {
        printf("Palindrome valid");
    } else {printf("Palindrome invalid");}
    return 0;
}