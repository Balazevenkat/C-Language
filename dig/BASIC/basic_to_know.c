//Cube of a number
// #include <stdio.h>
// int main(){
//     int number;
//     printf("Enter a Number:");
//     scanf("%d",&number);
//     printf("Cube of given number is :%d",number*number*number);
//     return 0;
// }


//ASCII code for the above C program
// #include <stdio.h>
// int main(){
//     char ch;
//     printf("Enter a Char:");
//     scanf("%c",&ch);
//     printf("ASCII of given Character is :%d",ch);
//     return 0;
// }

//Code for givven number is even or odd
// #include <stdio.h>
// int main(){
//     int number;
//     printf("Enter a Number:");
//     scanf("%d",&number);
//     if(number%2==0){
//         printf("Given number is Even");
//     }else{
//         printf("Given number is Odd");
//     }
//     return 0;
// }

// Boolean data type
// The C programming language does not have a built-in boolean data type.
// #include <stdio.h>
// #include <stdbool.h>  // Import the boolean header file 

// int main() {
//   bool isProgrammingFun = true;
//   bool isFishTasty = false;
//   printf("%d\n", isProgrammingFun);  // Returns 1 (true)
//   printf("%d", isFishTasty);         // Returns 0 (false)

//   return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int n=5,a,b,A,B,x=5,s=0;
//     for(a=1;a<=n;a++){
//         for(b=-(n-1);b<n;b++){
//             if((x <= a) && (s <= n)){
//               printf("*");
//               s++;
//             }
//             else{
//               printf(" ");
//             }
//             x--;
//         }
//         x = 5;

//         printf("\n");
//     }
// }


// #include <stdio.h>
// int fun(int n){
// int x=1, k;
// if (n==1) return x;
// for (k=1; k<n; ++k)
// x = x + fun (k) * fun (n - k);
// return x;
// }
// int main(){
//   printf("%d",fun(4));

// }

// #include<stdio.h>
// int f1(void);
// int f2(void);
// int f3(void);
// int x = 10;
// int main( )
// {
// int x = 1;
// x +=f1() + f2() + f3() + f2();
// printf("%d", x);
// return 0;
// }
// int f1() { int x = 25; x++; return x; }
// int f2() { static int x = 50; x++; return x; }
// int f3() { x *= 10; return x; }



// int a, b, c = 0;
// void prtFun (void);
// int main ()
// {
// static int a = 1; 
// prtFun();
// a += 1;
// prtFun();
// printf ( "\n %d %d " , a, b) ;
// }
// void prtFun (void)
// {
// static int a = 2; 
// int b = 1;
// a += ++b;
// printf (" \n %d %d " , a, b);
// }

// #include <stdio.h>
// int main() {
//     int a[5] = {10, 20, 30, 40, 50};
//     int i = 3;
//     printf("%d\n", i+2[a]);
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int *ptr = (arr + 2);
//     printf("%d\n", ptr[-1]);
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int a[3] = {10, 20, 30};
//     int *p = a;
//     printf("%d\n", *(p++ + 1));
//     printf("%d\n", *p);
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int arr[3] = {1, 2, 3};
//     int *ptr = arr;
//     ++*ptr;
//     ptr += 1;
//     (*ptr)++;
//     printf("%d %d %d", arr[0], arr[1], arr[2]);
//     return 0;
// }
// #include <stdio.h>
// int main() 
// {
//     int a[] = {5, 10, 15};
//     int *p = a;
//     ++*p;
//     p++;
//     *p += 2;
//     printf("%d %d\n", a[0], a[1]);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//         int arr[5] = {10, 20, 30, 40, 50};
//         void *p = arr;
//         p = (char *)p + sizeof(int);
//         printf("%d\n",*(int *)p);
//         return 0;
// }
// int main() { 

//  int y[4] = {6, 7, 8, 9};

//  int *ptr = y + 2; 

//  printf("%d", ptr[ 1 ] ); 

//  }
// #include<stdio.h> 
// int main() { 
//   int a=5;
//   int *p; 
//   p=&a; 
//   printf("Enter the data..."); 
//   scanf("%d",p); // if 16 is given through keyboard 
//   printf("%d,%d",a,*p); 
// }
// int main() { 
//   int a[5]={1,3,6,7,0}; 
//   int *b; 
//   b=&a[2]; 
//   printf("%d",b[-1]); 
// }
// #include<stdio.h>
// void main()
// {
// int a[5]={1,2,3,4,5};
// int *ptr=(int *)(&a+1);
// // ptr-1;
// printf("%d %d ",*(a+1),*(ptr-5));
// }
// int main() {
//   int A[]={1,2,3,4,5}; 
//   int x; 
//   x=*A+1-*A+3; 
//   printf("%d", x); 
// }
// int main() { 
//   int y[4] = {6, 7, 8, 9}; 
//   int *ptr = y + 2; 
//   printf("%d", ptr[ 1 ] ); 
// }
// int main() { 
//   int z[3]={1,2,3}; 
//   int *p=&z[1]; 
//   int x=*p++; 
//   printf("%d",x); 
// }
// int main() { 
//   int i; 
//   double a=5.2; 
//   char *ptr; 
//   ptr=(char *)&a; 
//   for(i=0;i<=7;i++) printf("%d ",*ptr++); 
// }

// int main()
// { 
// char str[]={'A','B','C','D','E'};
// str++;
// printf("%c",*str);
// }
// #include<stdio.h>
// int main()
// {
// int arr[ ]={1.2, 2.4, 3.6, 4.8, 5.9};
// int j, *ptr = arr;
// for(j = 0;j<5;j++)
// {
// printf("%d ", *arr);
// ++ptr;
// }
// }
// int main() { 
//   int a[]={11,22,33}; 
//   int *p=a; 
//   printf("%d",p[0]++); 
//   printf("%d",a[0]++); 
// }
// #include<stdio.h> 
// int main(){ 
//   int a = 320; 
//   char *ptr; 
//   ptr =( char *)&a; 
//   printf("%d ",*ptr); 
//   return 0; 
// }
// #include<stdio.h>
// int main()
// {
//   int x=10,y=15,z=320;
//   char*ptr=&x;
//   ++ptr;
//   ++ptr;
//   printf("%d\n",ptr[2]);
//   printf("%d\n",*(ptr+2));
//   printf("%d\n",((((ptr+2)-2)[-2])));
//   ptr[2]=-1;
//    ptr[6]=-1;
//   printf("x=%d\n",x);
//   printf("y=%d\n",y);
//   printf("z=%d\n",z);
// }

// #define call(x,y) x##y  //xy
// void main(){
// int x=5,y=10,xy=20;
// printf("%d",xy+call(x,y)); //xy+call(x,y)=20+xy=20+20=40
// }


// #define FALSE -1
// #define TRUE 1
// #define NULL 0
// main(){
//     if(NULL)//if(0)
//         puts("NULL");
//     else if(FALSE)//else if(-1)
//         puts("TRUE");//TRUE
//     else
//         puts("FALSE");
// }

// #define FALSE -1
// #define TRUE 1
// #define NULL 0
// main(){
//     if(FALSE)//if(-1)
//         puts("NULL");//NULL
//     if(TRUE)//else if(1)
//         puts("TRUE");//TRUE
//     else
//         puts("FALSE");
// }

// #include<stdio.h>
// #define DC 10
// void main(){
//     #ifdef DC
//         printf("DC=%d ",DC);//DC=10
//     #else
//         printf("not defined");
//     #endif
//     #undef DC
//     #define DC 66
//     printf("DC=%d ",DC);//DC=66
// }

// #include<stdio.h>
// #define MAX printf("Hello ");
// // printf("Hi ");
// #define MIN printf("Bye ");
// main(){
//     if(5>10)//false
//         MAX
//     else
//         MIN//printf("Bye ");
// }

// #include<stdio.h>
// #define MAX printf("Hello ")\
//            // printf("Hi ");       
// #define MIN printf("Bye ");      
// main(){
//     if(5>10)//false
//         MAX
//     else
//         MIN//printf("Bye ");
// }

// #include<stdio.h>
// main(){
//     #define i 10
//     #if i==10//10==10
//         printf("True");//True
//     #else
//         printf("False ");
//     #endif
// }

// #include<stdio.h>
// #define x 5+5//x=5+5
// int main(){
//     int i;
//     i = x * x * x;//i=x*x*x = 5+5*5+5*5+5= 5+(5*5)+(5*5)+5=60
//     printf("%d ",i);
// }

// #include<stdio.h>
// #define _vec(x) ++x * ++x
// int main(){
//     int a = 3;
//     int z;
//     z = ++a * ++a;
//     a -= 3;
//     printf("%d %d", _vec(a), z);//16  25
// }

// #include<stdio.h>
// #define v 9
// main(){
//     int b;
//     #define v 10
//     b=v*5;//b=10*5=50
//     printf("%d",b);//50
// }

// #define paste(a,b) a##b //ab
// main() {
//     int a=3,b=6;
//     printf("%d", paste(a,b));//printf("%d", ab);//error:ab not defined
// }
// #define paste(a,b) a##b //ab
// main() {
//     int a=3,b=6,ab=1;
//     Printf("%d", paste(a,b));//printf("%d", ab);//error
// }

// #define paste(a,b) a##b //ab
// main() {
//     int a=3,b=6,ab=1;
//     printf("%d", paste(a,b));//printf("%d", ab);//1
// }

// #define CUBE(x) x*x*x
// main(){
//     int a,b=3;//4  5  6
//     a=CUBE(b++);//a=x*x*x = b++ * b++ * b++ = 3 * 4 * 5 = 60
//     printf("%d %d",a,b);//60  6
// }

// a=4    a++ = 3         ++a = 4

// #include<stdio.h>
// #define MAX printf("Hello ");
// #define MIN printf("Bye ");
// int main()
// {
//     if(5 > 10)
//         MAX
//     else
//         MIN
//     return 0;
// }

// #include<stdio.h>
// #define LOOP(a) int i;\
// for(i=1;i<=a;i++);\
// printf("%d ",i);
// void main(){
//     LOOP(5);        //int i;//1 2 3 4 5 6
//                     //for(i=1;i<=a;i++);//i<=5
//                     //printf("%d ",i); //6
// }

// #include<stdio.h>
// #define Macro(a) printf("Macro=%d",a);
// void main(){
//     Macro(10);//printf("Macro=%d",a); //Macro=10
// }

// #include<stdio.h>
// #define NODE(a) a*10+2
// void main(){
//     int a=NODE(2)*2;//a= a*10+2*2 = (2*10)+(2*2)=24
//     printf("%d ",a);//24
// }

// #define sum(a,b,c) a+b+c
// #define avg(a,b,c) sum(a,b,c)/3
// #define geq(a,b,c) avg(a,b,c) >= 60
// #define lee(a,b,c) avg(a,b,c) <= 60
// #define des(a,b,c,d) (d==1?geq(a,b,c):lee(a,b,c))
// main () {
// int num = 70;
// char ch = '0';
// float f = 2.0;
// if des(num,ch,f,0) puts ("lee..");
// else puts("geq...");
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[] = "VECTOR\0\INDIA\0";
//     printf("%s\n", str);
//     return 0;
// }

// #include<stdio.h>
// void main(){
// char arr[11]="The African Queen";
// printf("%s",arr);
// }

// #include<stdio.h>
// int main()
// {
//     char p[] = "%d\n";
//     p[1] = 'c';
//     printf(p, 65);
//     return 0;
// }

// int is_prime(int num){
//     int cnt=0;
//     for(int i=1;i<num;i++){
//         if(num%i==0){
//             cnt++;
//         }
//     }
//     if(cnt>2){
//         return 0;
//     }
//     return 1;
//  }
// int main(){
//     int min,max;
//     printf("Enter a Min :\n");
//     scanf("%d",&min);
//     printf("Enter a Max :\n");
//     scanf("%d",&max);
//     for(int i=min;i<=max;i++){
//         if(is_prime(i)){
//             printf("%d,",i);
//         }
//     }
// }
// #include<stdio.h>
// #include<string.h>
// int is_vowel(char ch){
//     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
//         return 1;
//     }
//     return 0;
// }
// int main(){
//     char str[50];
//     printf("Enter a String :\n");
//     // gets(str);
//     fgets(str,sizeof(str),stdin);
//     if(str[strlen(str)-1]=='\n'){
//         str[strlen(str)-1]='\0';
//     }
//     printf("Vowels are :\n");
//     for(int i=0;str[i];i++){
//         if(is_vowel(str[i])){
//             printf("%c ",str[i]);
//         }
//     }
    
    // printf("%s\n",str);
    // printf("String length is : %d\n",strlen(str));
    // printf("String size is : %d",sizeof(str));
// }
// #include<stdio.h>
// #include<string.h>
// int is_repeated(char *str,char ch){
//     int cnt=0;//2
//     for(int i=0;str[i];i++){ // n a n i
//         if(ch==str[i]){
//             cnt++;
//         }
//     }
//     if(cnt>=2){
//         return 1;
//     }
//     return 0;

// }
// int main(){
//     char str[50];
//     printf("Enter a String :\n");
//     fgets(str,sizeof(str),stdin); // n a n i \0 \0
//     if(str[strlen(str)-1]=='\n'){
//         str[strlen(str)-1]='\0';
//     }
//     for(int i=0;str[i];i++){ //n a n i
//         if(is_repeated(str,str[i])){
//             printf("%c ",str[i]);
//         }
//     }
// }
//           (8    4    2    1)     ( 8    4   2    1 )
//            1              1             1

//                   9                     4
// #include<stdio.h>
// int main(){
//     int num=16;
    // printf("Enter a Number :\n");
    // scanf("%d",&num);
    // if(num%2==1){
        // for(int bit=31;bit>=0;bit--){
        //     printf("%d ",(num>>bit)&1);
        // }
    // }
    // else{
    //     printf("Error");
    // }
// }
//    0 1 1 0 0 
//    0 1 1 0 0     
//                1                   1
//               0 1
//                                           
//status of a bit  →   (num>>bit) &1
//set bit          →   num |= (1<<bit)
//clear bit        →   num &= ~(1<<bit)
//toggle bit       →   num ^= (1<<bit)

// #include<stdio.h>
// int main(){
//     int a=10;
//     int b=20;
//     int c=30;
//     {
//         int c=b-a;
//         printf("%d\n",c);
//     }
//     printf("%d",c);
// }

// int main(){
//     int i = 5;
//     int a = ++i;
//     int a = i++;
//     printf("%d\n",i);
//     printf("%d",a);
//     printf("%d\n",++i);
//     printf("%d",i++);
// }

// #include <stdio.h>
// int main(void)
// {
//     if (printf("Hello World"))
//     {
//     }
// }

// #include <stdio.h>
// void printNos(unsigned int n)
// {
//   if(n > 0)
//   {
//     printNos(n-1);
//     printf("%d ",  n);
//   } 
// }
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     printNos(n);
// }

#include<stdio.h>
int main(){
    // int num,digit;
    // int small_value = 9;//1
    // int sec_small_value = 9;//2

    // printf("enter the num value: ");
    // scanf("%d",&num);//54321

    // while(num!=0){                 
    //     digit = num%10;//5
    //     num/=10;
    //     if(digit<small_value){
    //         sec_small_value = small_value;
    //         small_value = digit;     
    //     }
    //     else if(digit<sec_small_value && digit!= small_value){   
    //         sec_small_value = digit;
    //     }
    // }
    // printf("%d second smallest value ",sec_small_value);
    // return 0;
    for(int i=0;;i++){
        printf("%d ",i);
    }
}






