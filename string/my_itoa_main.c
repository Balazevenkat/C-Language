//The function itoa() in C is used to convert an integer (int) into a string (char array) in a 
//given base (like 2 for binary, 10 for decimal, 16 for hexadecimal, etc.).
//char *itoa(int value, char *str, int base);
//value → the integer to convert
//str → the character array to store the resulting string
//base → the number system (2 to 36)
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main(){
//     int a1 =20;
//     int a2 =20.1;
//     int a3 =-20;
//     char temp1[30];
//     char temp2[30];
//     char temp3[30];
    
//     // itoa(a1,temp1,10);
//     // itoa(a2,temp2,10);
//     // itoa(a3,temp3,10);

//     // itoa(a1,temp1,2);
//     // itoa(a2,temp2,2);
//     // itoa(a3,temp3,2);

//     itoa(a1,temp1,16);
//     itoa(a2,temp2,16);
//     itoa(a3,temp3,16);

//     printf("%s\n",temp1);
//     printf("%s\n",temp2);
//     printf("%s\n",temp3);
// }

#include <stdio.h>
#include <string.h>
// reverse a string
void reverse(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}
// User-defined itoa function
char* my_itoa(int num, char* str, int base) {
    int i = 0;
    int isNegative = 0;
    // Handle 0 explicitly
    if (num == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }
    // Handle negative numbers for decimal
    if (num < 0 && base == 10) {
        isNegative = 1;
        num = -num;
    }
    // Process digits
    while(num) {
        int rem = num % base;
        str[i++] = (rem > 9) ? (rem - 10) + 'A' : rem + '0';
        num = num / base;
    }
    // Add '-' if the number is negative
    if (isNegative)
        str[i++] = '-';
    str[i] = '\0';
    // Reverse the string
    reverse(str);
    return str;
}

int main() {
    char str[30];
    printf("Decimal: %s\n", my_itoa(123, str, 10));  // 123
    printf("Hex: %s\n", my_itoa(123, str, 16));      // 0x7B
    printf("Octal: %s\n", my_itoa(123, str, 8));     // 0173
    printf("binary: %s\n", my_itoa(123, str, 2));     // 1111011
    printf("Negative: %s\n", my_itoa(-123, str, 10)); // -123
}
