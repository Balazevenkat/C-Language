#include<stdio.h>
#include<stdlib.h>

int main()
{
    for(int i=0;i<5;i++,printf("\n"))
    {
        for(int j=0;j<(i+1);j++)
        if(((i+1)%2)!=0)
        printf("%c ",'A'+j);
        else
        printf("%c ",'a'+j);
    }
    
}

/*
A 
a b 
A B C 
a b c d 
A B C D E
*/
