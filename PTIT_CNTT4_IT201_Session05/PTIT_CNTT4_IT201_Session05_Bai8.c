#include <ctype.h>
#include<stdio.h>
#include <string.h>

int stringToInt(char str[] ,int n) {
    if (n==0) {
        return 0;
    }
    if (!isdigit(str[n-1])) {
        printf("input khong hop le ");
        return 1;
    }
    return stringToInt(str,n-1)*10+(str[n-1]-'0');
}
int main() {
  char str[100];
    printf("moi nhap chuoi :");
    scanf("%s",str);
    int len = strlen(str);
   int number=  stringToInt(str,len);
    printf("%d",number);
    return 0;
}
