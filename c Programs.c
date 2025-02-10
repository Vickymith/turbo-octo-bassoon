#include<stdio.h>
int main(){
    //int num, result;
    int ones, tens, hundreds, thousand;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    int sum = 0;
    int temp = num;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    printf("Sum of digits: %d\n\n", sum);
    /*
    thousand = (num/100) % 10;
    hundreds = num / 100;
    tens = (num / 10) % 10;
    ones = num % 10;
    result = ones * 100 + tens * 10 + hundreds + thousand;
    printf("Reversed number: %d\n\n", result);*/
    return 0;
}