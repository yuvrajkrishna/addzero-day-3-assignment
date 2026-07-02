
#include <stdio.h>

int main() {
    // Write C code here
    int days = 1258;
    
    int year = days / 365;
    days %= 365;
    
    int month = days / 30;
    days %= 30;
    
    int day = days;
    
    printf("Years = %d Month = %d  Day = %d",year,month,day);

    return 0;
}