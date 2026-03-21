// #include <stdio.h>
// int main()
// {
    // int p;
    // for(p=1; p<=10;--p , p =p+2 ){
    // printf( " Hello " );
    // printf( " hi " );
    // }

    // for (int i=5; ++i; i -=3)
    //     printf("%d ",i);

    // int i = 0,j = 0;
    // for (i = 0;i < 5; i++){
    //     for (j = 0;j < 4; j++){
    //         if (i > 1)
    //             continue;
    //         printf("Hi-");
    //     }
    // }

    // int a = 0, i = 0, b;
    // for (i = 0;i < 5; i++){
    //     printf("in loop: i=%d\n");
    //     a++;
    //     if (i == 3)
    //         break;
    // }

    // int i = 0;
    // for (i = 0;i < 5; i++)
    //     if (i < 4){
    //         printf("Hello");
    //         break;
    //     }

    // int arr[6] = {11, 22, 33, 44, 55, 66};
    // int *ptr = arr;
    // printf("% d\n", *ptr++);//11
    // printf("% d\n", ++*ptr);//23
    // printf("% d\n", *++ptr);//33
    // ptr[1]++;
    // ptr++;
    // ptr[-1]++;
    // ptr[0]++;
    // printf("%d %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);//11 23 34 46 55 66

    // int arr[6]={11,22,33,44,55,66};
    // printf("%d\n",++*arr);
    // printf("%d\n",*arr++);

    // char arr[10] = {'0','1', '2', '3', '4', '5', '6','7', '8', '9'};
    // char *cp;
    // int *ip;
    // cp = ip = arr;
    // printf("% x % x\n", *cp, *ip);
    // cp++;
    // ip++;
    // printf("% x % x\n", *cp, *ip);

//     int num = 515;
//     char *cptr = &num;
//     int *iptr = &num;
//     printf("%d\n", *cptr); // 3
//     printf("%d\n", *iptr); // 515
//     *cptr = 'a';
//     printf("%d\n", *cptr); //97
//     printf("%d\n", *iptr); //
// }

//Write a program to implement strcmp.
#include<stdio.h>
#include<string.h>
int my_strcmp(const char *s1,const char *s2){
    while(*s1 && (*s1==*s2)){
        s1++;
        s2++;
    }
    int x = *s1 - *s2;
    if(x>0) return 1;
    else if(x<0) return -1;
    else return 0;
}
int main(){
    char s1[30]="abc";
    char s2[30]="xyz";
    printf("%d\n",my_strcmp(s1,s2));
}
