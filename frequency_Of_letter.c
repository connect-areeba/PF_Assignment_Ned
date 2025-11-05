#include <stdio.h>

void main() {
    char name[100], course[200];
    int freq[256] = {0}, i, max_freq = 0;

    printf("Enter name: ");
    scanf(" %[^\n]", name);

    printf("Enter course: ");
    scanf(" %[^\n]", course);

    printf("Combined string: %s %s\n", name, course);

    i = 0;
    while (name[i] != '\0') {
        freq[name[i]]++;
        if (freq[name[i]] > max_freq) {
            max_freq = freq[name[i]];
        }
        i++;
    }
    freq[' ']++; 
    i = 0;
    while (course[i] != '\0') {
        freq[course[i]]++;
        if (freq[course[i]] > max_freq) {
            max_freq = freq[course[i]];
        }
        i++;
    }
    if (freq[' '] > max_freq) {
        max_freq = freq[' '];
    }

    printf("Letters with highest frequency(%d):\n", max_freq);
    for (i = 0; i < 256; i++) {
        if (freq[i] == max_freq) {
            if (i == 32) {
                printf("Space: %d\n", freq[i]);
            } else {
                printf("%c = %d\n", i, freq[i]);
            }
        }
    }
}