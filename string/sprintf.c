#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>


int main()
{
    char str[100];
    
    int n;
    scanf("%d",&n);
    
    sprintf(str,"%d",n);
    
   puts(str);
}

//********************************************************************
#include <stdio.h>

int main() {
    char buffer[50];
    int hexValue = 255;
    // Converts 255 to string "ff"
    sprintf(buffer, "%x", hexValue); 
    printf("Lowercase: %s\n", buffer);

    // Converts 255 to string "FF"
    sprintf(buffer, "%X", hexValue); 
    printf("Uppercase: %s\n", buffer);
    return 0;
}
