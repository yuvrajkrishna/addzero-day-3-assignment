#include<stdio.h>
int main (){
    int realnum = 1321;
    int num = realnum;
    int reverse = num % 10;
    num = num / 10;
   
    while(num > 0){
        int lastdigit = num % 10 ;
        reverse = reverse * 10 + lastdigit;
        num = num / 10;
    }

    if(reverse == realnum){
        printf("%d is a palindrome",realnum);
    }
    else{
        printf("%d is not a palindrome",realnum);
    }
}