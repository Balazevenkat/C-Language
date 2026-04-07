#include <stdio.h>

unsigned int swap_bytes(unsigned int n, int pos1, int pos2) {
    // Extract bytes
    unsigned int b1 = (n >> (pos1 * 8)) & 0xFF;
    unsigned int b2 = (n >> (pos2 * 8)) & 0xFF;

    // Clear those byte positions in original number
    n &= ~(0xFF << (pos1 * 8));
    n &= ~(0xFF << (pos2 * 8));

    // Write swapped bytes back
    n |= (b1 << (pos2 * 8));
    n |= (b2 << (pos1 * 8));

    return n;
}

int main() {
    unsigned int n = 0x12345678;

    // Example: swap Byte1 and Byte0 (56 ↔ 78)
    unsigned int result = swap_bytes(n, 1, 0);

    printf("0x%X\n", result);
}
