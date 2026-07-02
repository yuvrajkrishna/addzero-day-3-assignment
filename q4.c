// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int num = 1258;
    int reverse = num % 10 ;
    num = num / 10 ; 
    int count = 10;
    while (num > 0 ){
        int lastdigit = num % 10 ;
        num = num / 10;
        reverse = reverse * 10  + lastdigit;
        count = count * 10;
    }
    printf("%d",reverse);
    return 0;
}
