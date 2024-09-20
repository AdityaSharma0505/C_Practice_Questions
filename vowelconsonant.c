// Question 23 - Write a program to print how many vowel and consonant in your first name

#include <stdio.h>
#include <string.h>

int main() {
    char name[10];
    int length;
    int vowelcount = 0;
    int concount = 0;

    printf("Enter your first name : ");
    scanf("%s", name);
    length = strlen(name);

    for(int i = 0; i < length; i++) {
        if (name[i] == 'a' || name[i] == 'A' || name[i] == 'e' || name[i] == 'E' || name[i] == 'i' || name[i] == 'I' || name[i] == 'o' || name[i] == 'O' || name[i] == 'u' || name[i] == 'U') {
            vowelcount++;
        }
        else {
            concount++;
        }
    }

    printf("The total no. of vowels = %d\n", vowelcount);
    printf("The total no. of consonants = %d\n", concount);

    return 0;
}