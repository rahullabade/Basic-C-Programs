//1.	Write a program for counting the number of every character of a given text file.
#include <stdio.h> 
#include <stdlib.h>

int main() {
    FILE *file;
    int ch;
    int count[256] = {0};  // Array to store the count of each character

    // Open the file in read mode
    file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("ERROR while opening the file\n");
        return 1;  // Return an error code if the file cannot be opened
    }

    // Read each character from the file and count occurrences
    while ((ch = fgetc(file)) != EOF) {
        count[ch]++;
    }
    fclose(file);  // Close the file after reading
    
    // Print the counts of characters that appeared at least once
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("'%c' : %d\n", i, count[i]);
        }
    }
    return 0;  // Return 0 to indicate successful execution
}
