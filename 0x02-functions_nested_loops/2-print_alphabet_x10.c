#include "main.h"
void print_alphabet_x10(void){

    int i, j;

    // Outer loop for 10 repetitions
    for (i = 0; i < 10; i++) {
        
        // Inner loop for characters 'a' through 'z'
        for (j = 'a'; j <= 'z'; j++) {
            _putchar(j);
        }
        
        // Print a newline after each full alphabet sequence
        _putchar('\n');
    }	
}
