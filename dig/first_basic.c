#include<stdio.h>
int main(){
    int n=0;
    char c='c';
    float f=34.5;
    n=sizeof(int);
    printf("%d\n",n);                 //4
    printf("%d\n",sizeof c);          //1
    printf("%d\n", sizeof 'c');       // 4
    printf("%d\n", sizeof 34.56);     // 8
    printf("%d\n", sizeof(float));    //4
    printf("%d\n",sizeof("float"));   //6
    printf("%d\n",sizeof("12.34"));   //6
    printf("%d\n",sizeof("c"));       // 2
}
/*sizeof(type) → size of that type
sizeof(variable) → size of variable’s type
Character literal 'c' → treated as int
Floating literal (34.56) → default double
String "..." → array + includes \0*/
