//method 1
#include <stdio.h>

unsigned int swapEndian(unsigned int num)
{
    return ((num >> 24) & 0x000000FF) |
           ((num >> 8)  & 0x0000FF00) |
           ((num << 8)  & 0x00FF0000) |
           ((num << 24) & 0xFF000000);
}

int main()
{
    unsigned int num;

    scanf("%x", &num);

    printf("Original : 0x%08X\n", num);

    unsigned int swapped = swapEndian(num);

    printf("Converted: 0x%08X\n", swapped);

    return 0;
}

/*
Original : 0x12345678
Converted: 0x78563412
*/

//method 2

#include <stdio.h>

unsigned int swapEndian(unsigned int num)
{
    unsigned int result = 0;

    unsigned char *src = (unsigned char *)&num;
    unsigned char *dst = (unsigned char *)&result;

    dst[0] = src[3];
    dst[1] = src[2];
    dst[2] = src[1];
    dst[3] = src[0];

    return result;
}

int main()
{
    unsigned int num = 0x12345678;

    printf("Before: 0x%08X\n", num);
    printf("After : 0x%08X\n", swapEndian(num));

    return 0;
}

/*
//system check 
*/

#include <stdio.h>

int main()
{
    unsigned int x = 1;
    char *ptr = (char *)&x;

    if (*ptr == 1)
        printf("Little Endian\n");
    else
        printf("Big Endian\n");

    return 0;
}
