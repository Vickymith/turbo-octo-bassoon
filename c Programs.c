#include <stdio.h>

int main() {
    int num, result;
    int tens, ones, hundreds, thousand;
    int a, b, c, d, e, f, g, h, i, j, x, y;
    
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

     //Subtract 5 if number is odd
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("%d\n", a - (a % 2) * 5);

    //Subtract 5 if ten's digit is odd
    printf("Enter a number: ");
    scanf("%d", &b);
    int tens_digit = (b / 10) % 10;
    printf("%d\n", b - (tens_digit % 2) * 5);

    //Subtract 5 if the sum of digits is odd for a two-digit number
    printf("Enter a two-digit number: ");
    scanf("%d", &c);
    int sum_digits = (c / 10) + (c % 10);
    printf("%d\n", c - (sum_digits % 2) * 5);

    //Subtract 5 if one's and hundred's digit are same for a three-digit number
    printf("Enter a three-digit number: ");
    scanf("%d", &d);
    int hundreds = d / 100;
    int ones = d % 10;
    printf("%d\n", d - (5 * (hundreds == ones)));

    //Subtract 5 if ten's digit and hundred's digit are same for a four-digit number
    printf("Enter a four-digit number: ");
    scanf("%d", &e);
    hundreds = (e / 100) % 10;
    tens_digit = (e / 10) % 10;
    printf("%d\n", e - (5 * (hundreds == tens_digit)));

    //Sum of digits equals 10 for a three-digit number
    printf("Enter a three-digit number: ");
    scanf("%d", &f);
    sum_digits = (f / 100) + ((f / 10) % 10) + (f % 10);
    printf("%s\n", sum_digits == 10 ? "Success" : "Failure");

    //Sum of one's digit and hundred's digit is less than 10
    printf("Enter a three-digit number: ");
    scanf("%d", &g);
    int sum_ends = (g / 100) + (g % 10);
    printf("%s\n", sum_ends < 10 ? "Success" : "Failure");

    //Sum of ten's and hundred's digits is greater than 10 for a four-digit number
    printf("Enter a four-digit number: ");
    scanf("%d", &h);
    int sum_middle = ((h / 100) % 10) + ((h / 10) % 10);
    printf("%s\n", sum_middle > 10 ? "Success" : "Failure");

    //Check sum equals 10 and one digit more than 7
    printf("Enter a four-digit number: ");
    scanf("%d", &i);
    hundreds = (i / 100) % 10;
    tens_digit = (i / 10) % 10;
    sum_middle = hundreds + tens_digit;
    int more_than_7 = (hundreds > 7) || (tens_digit > 7);
    printf("%s\n", (sum_middle == 10 && more_than_7) ? "Success" : "Failure");

    //Sum of digits is less than 10 or reduce to a single digit
    printf("Enter a three-digit number: ");
    scanf("%d", &j);
    sum_digits = (j / 100) + ((j / 10) % 10) + (j % 10);
    while (sum_digits >= 10) {
        sum_digits = (sum_digits / 10) + (sum_digits % 10);
    }
    printf("%d\n", sum_digits);

    //Sum or difference of two 2-digit numbers
    printf("Enter two 2-digit numbers: ");
    scanf("%d %d", &x, &y);
    int result = (x + y < 100) ? (x + y) : (x - y);
    printf("%d\n", result);

    //Sum of digits of the bigger number
    printf("Enter two 2-digit numbers: ");
    scanf("%d %d", &x, &y);
    int biggest = (x > y) ? x : y;
    sum_digits = (biggest / 10) + (biggest % 10);
    printf("%d\n", sum_digits);

    //Difference of one's and hundred's digit based on ten's digit
    printf("Enter two 3-digit numbers: ");
    scanf("%d %d", &x, &y);
    int tens_x = (x / 10) % 10;
    int tens_y = (y / 10) % 10;
    int chosen = (tens_x > tens_y) ? x : y;
    int diff = abs((chosen / 100) - (chosen % 10));
    printf("%d\n", diff);

    //Sum of all digits of the number with bigger one's + hundred's digit sum
    printf("Enter two 3-digit numbers: ");
    scanf("%d %d", &x, &y);
    int sum_x = (x / 100) + (x % 10);
    int sum_y = (y / 100) + (y % 10);
    chosen = (sum_x > sum_y) ? x : y;
    sum_digits = (chosen / 100) + ((chosen / 10) % 10) + (chosen % 10);
    printf("%d\n", sum_digits);

    return 0;
}
