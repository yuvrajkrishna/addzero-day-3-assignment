// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int num = 0;
    int sum = 0;
    while(num > 0){
       int lastdigit = num%10;
       num /=10;
       sum += lastdigit;
    }
    printf("%d",sum);

    return 0;
}