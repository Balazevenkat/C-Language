//char *strtok(char *str, const char *delim);
/* The  strtok()  function  breaks  a  string  into a sequence of zero or more nonempty tokens. On the first call 
to strtok(), the string to be parsed should be specified in str. In each subsequent call that should parse the 
same string, str must be NULL*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],*ptr=NULL;
    printf("Enter a String :\n");
    fgets(str,sizeof(str),stdin);
    if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
    ptr = str;
    ptr = strtok(ptr," ");
    while(ptr != NULL){
        // puts(ptr);
        for(int i=0;i<strlen(ptr);i++){
            printf("%c ",*(ptr+i));
        }
        printf("word_len : %d\n",strlen(ptr));
        ptr = strtok(NULL," ");
    }
}
/*
Enter a String :
venakt abc dhc
v e n k a t word_len : 5
a b c word_len : 3
d h c word_len : 3
*/
