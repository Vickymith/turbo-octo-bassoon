#include <stdio.h>

int main() {
    int num, result;
    int tens, ones, hundreds, thousand;
    
    printf("Enter a number to add 2: ");
    scanf("%d", &num);
    result = num + 2;
    printf("Result: %d\n\n", result);
    
    printf("Enter a number to subtract 5: ");
    scanf("%d", &num);
    result = num - 5;
    printf("Result: %d\n\n", result);
    
    printf("Enter a number to multiply by 3: ");
    scanf("%d", &num);
    result = num * 3;
    printf("Result: %d\n\n", result);
    
    printf("Enter a number to divide by 6: ");
    scanf("%d", &num);
    result = num / 6;
    printf("Quotient: %d\n\n", result);
    
    printf("TEnter a number to get the remainder when divided by 8: ");
    scanf("%d", &num);
    result = num % 8;
    printf("Remainder: %d\n\n", result);
    
    printf("Enter a two-digit number to get the one's digit: ");
    scanf("%d", &num);
    result = num % 10;
    printf("One's digit: %d\n\n", result);
    
    printf("Enter a two-digit number to get the ten's digit: ");
    scanf("%d", &num);
    result = num / 10;
    printf("Ten's digit: %d\n\n", result);
    
    printf("Enter a three-digit number to get the one's digit: ");
    scanf("%d", &num);
    result = num % 10;
    printf("One's digit: %d\n\n", result);
    
    printf("Enter a three-digit number to get the hundred's digit: ");
    scanf("%d", &num);
    result = num / 100;
    printf("Hundred's digit: %d\n\n", result);
    
    printf("Enter a three-digit number to get the ten's digit: ");
    scanf("%d", &num);
    result = (num / 10) % 10;
    printf("Ten's digit: %d\n\n", result);
    
    printf("Enter a three-digit number to sum its digits: ");
    scanf("%d", &num);
    int sum = 0, temp = num;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    printf("Sum of digits: %d\n\n", sum);
    
    printf("Enter a two-digit number to reverse: ");
    scanf("%d", &num);
    tens = num / 10;
    ones = num % 10;
    result = ones * 10 + tens;
    printf("Reversed number: %d\n\n", result);
    
    printf("Enter a three-digit number to reverse: ");
    scanf("%d", &num);
    hundreds = num / 100;
    tens = (num / 10) % 10;
    ones = num % 10;
    result = ones * 100 + tens * 10 + hundreds;
    printf("Reversed number: %d\n\n", result);
    
    printf("Enter a four-digit number (reverse the first two digits): ");
    scanf("%d", &num);
    thousand = num / 1000;
    hundreds = (num / 100) % 10;
    tens = (num / 10) % 10;
    ones = num % 10;
    result = hundreds * 1000 + thousand * 100 + tens * 10 + ones;
    printf("Result: %d\n\n", result);
    
    printf("Enter a four-digit number (reverse the last two digits): ");
    scanf("%d", &num);
    thousand = num / 1000;
    hundreds = (num / 100) % 10;
    tens = (num / 10) % 10;
    ones = num % 10;
    result = thousand * 1000 + hundreds * 100 + ones * 10 + tens;
    printf("Result: %d\n\n", result);
    
    printf("Enter a two-digit number (make one's digit 0): ");
    scanf("%d", &num);
    result = (num / 10) * 10;
    printf("Result: %d\n\n", result);
    
    printf("Enter a two-digit number (make ten's digit 1): ");
    scanf("%d", &num);
    ones = num % 10;
    result = 10 + ones;
    printf("Result: %d\n\n", result);
    
    printf("Enter a three-digit number (make one's digit 2): ");
    scanf("%d", &num);
    result = (num / 10) * 10 + 2;
    printf("Result: %d\n\n", result);
    
    printf("Enter a three-digit number (make ten's digit 0): ");
    scanf("%d", &num);
    hundreds = num / 100;
    ones = num % 10;
    result = hundreds * 100 + ones;
    printf("Result: %d\n", result);
    
    return 0;
}
