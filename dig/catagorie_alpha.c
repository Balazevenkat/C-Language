#include<stdio.h>
int main(){
char ch;
scanf("%c",&ch);
((ch>=65)&&(ch<=90))?printf("Uppercase alphabet\n"):((ch>=97)&&(ch<=122))?printf("Lowercase alphabet\n"):((ch>=48)&&(ch<=57))?printf("Numeric character\n"):printf("Special character\n");
}
