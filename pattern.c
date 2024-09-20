// Question 16 - Write a program to print patterns : 


// A
// A B
// A B C
// A B C D
// A B C D E

// #include <stdio.h>
// int main() {
//     for(int i = 1; i <= 5; i++) {
//         for(int j = 1; j <= i; j++) {
//             printf("%c ", (64 + j));
//         }
//         printf("\n");
//     }

//     return 0;
// }

//    1
//   321
//  54321
// 7654321

#include <stdio.h> 
  
int main() 
{ 
    int rows = 5; 
  
    // first loop to print all rows 
    for (int i = 1; i <= rows; i++) { 
  
        // inner loop 1 to print white spaces 
        for (int j = 1; j < 2 * (rows - i); j++) { 
            printf(" "); 
        } 
  
        // inner loop 2 to print star * character 
        for (int k = 1; k < (2 * i); k++) { 
            printf("%d ", k); 
        } 
        printf("\n"); 
    } 
    return 0; 
}

//     1
//    12
//   123
//  1234
// 12345

// 555555555
//  4444444
//   33333
//    222
//     1

// 12345
// 1234
// 123
// 12
// 1

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// A B C D E
//   A B C D
//     A B C
//       A B
//         A

