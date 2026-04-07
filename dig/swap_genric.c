#include <stdio.h>

unsigned int swap_bytes(unsigned int n, int pos1, int pos2) {
    // Extract bytes
    unsigned int b1 = (n >> (pos1 * 4)) & 0x0F;
    unsigned int b2 = (n >> (pos2 * 4)) & 0x0F;

    // Clear those byte positions in original number
    n &= ~(0x0F << (pos1 * 4));
    n &= ~(0x0F << (pos2 * 4));

    // Write swapped bytes back
    n |= (b1 << (pos2 * 4));
    n |= (b2 << (pos1 * 4));

    return n;
}

int main() {
    unsigned int n = 0x12345678;

   
    unsigned int result = swap_bytes(n, 4, 0);

    printf("0x%X\n", result);
}
