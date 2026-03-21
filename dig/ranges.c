#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("char        : %d to %d\n", CHAR_MIN, CHAR_MAX);  //char        : -128 to 127
    printf("short int   : %d to %d\n", SHRT_MIN, SHRT_MAX);  //short int   : -32768 to 32767
    printf("int         : %d to %d\n", INT_MIN, INT_MAX);    //int         : -2147483648 to 2147483647
    printf("long int    : %ld to %ld\n", LONG_MIN, LONG_MAX);   //long int    : -2147483648 to 2147483647
    printf("float       : %e to %e\n", FLT_MIN, FLT_MAX);    //float       : 1.175494e-038 to 3.402823e+038  ->  IEEE 754
    return 0;
}
