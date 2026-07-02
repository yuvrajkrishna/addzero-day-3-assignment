
#include <stdio.h>

int main() {
    int num = 1258;
    int digit = 0;
    if(num == 0){
        digit = 0;
    }
    else{
        while(num > 0){
         digit+=1;
         num/=10;
    }
    }
    printf("%d",digit);

    return 0;
}