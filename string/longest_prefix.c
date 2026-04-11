#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* longestPrefix(char arr[][20], int n) {
    static char pref[20];
    strcpy(pref, arr[0]);

    for(int i=1; i<n; i++) {
        int j = 0;
        while(pref[j] && arr[i][j] && pref[j] == arr[i][j])
            j++;

        pref[j] = '\0';
    }
    return pref;
}

int main() {
    char arr[3][20] = {"flight", "flock", "flute"};

    printf("Longest Prefix: %s\n", longestPrefix(arr, 3));
}
