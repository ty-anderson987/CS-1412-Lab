#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {
    char square_or_circle;
    double side_square;
    double radius_circle;

    // Guard statement to make sure the user inputs S or C for square or circle
    do {
        printf("Do you want to compute the area of a square(S) or a circle(C)?:");
        scanf("%c", &square_or_circle);
        
        // Deals with user input c/s and not making 4 conditions so make uppercase to only use 2 conditions for the DoWhile loop
        square_or_circle = toupper(square_or_circle);

        // Since a there must by only 1 IF statement, i just use a Switch statement to replace a IF statement
        switch (square_or_circle) {
            case 'S': break;
            case 'C': break; 
            default: printf(" Not a valid response. Enter 'S' for Square and 'C' for circle.\n");
                    break;
        }
    } while (square_or_circle != 'S' && square_or_circle != 'C');





    // Logic
    switch (square_or_circle) {
        case 'S' : do { 
                        printf("What is the length of the side for the square?: ");
                        scanf("%lf", &side_square);

                        // Since a there must by only 1 IF statement, i just use a Switch statement to replace a IF statement
                        switch (side_square > 0) {
                            case 1: break;
                            default: printf("Provide a valid positive length for the side of a square.\n");
                                break;
                        }
                    } while (side_square < 0);

                    printf("The area of the square is %f\n", side_square * side_square);
                    break;

        default: do { 
                        printf("What is the radius of the circle?: ");
                        scanf("%lf", &radius_circle);

                        // Since a there must by only 1 IF statement, i just use a Switch statement to replace a IF statement
                        switch (radius_circle > 0) {
                            case 1: break;
                            default: printf("Provide a valid positive radius for the circle\n");
                                break;
                        }
                    } while (side_square < 0);

                    printf("The area of the circle is %f\n", 3.14 * radius_circle * radius_circle);
                    break;
    }
}


// There is a warning for switch case not meant for BOOLEAN but this question1 prompt requires 1 IF statement.