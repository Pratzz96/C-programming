/*
    Function demo
*/

#include <stdio.h>

//functions must be declared before they are called:

/*
 * FUNCTION DECLARATIONS or PROTOTYPES:
 */
void callout(char* str);
void starline();
float int2float(int num);
void countToTen();
void wedge(char what, int lines);

int main(int argc, char* argv[]) {
    starline();
    callout("Hello, world");
    callout(argv[0]);
    starline();
    printf("int = %d, float = %f\n", 42, int2float(42));
    starline();
    countToTen();
    wedge('@', 3);
return 0;
}

/*
 * FUNCTION DEFINITIONS
 */

//prints a string with \n before and after:
void callout(char* str) {
    printf("\n%s\n", str);
}

//just prints a line of stars:
void starline() {
    printf("********************\n");
}

//converts an int to a float:
float int2float(int num) {
    
    //this is a "cast." It doesn't change the type of num, but
    //(float) num means "num as a float."
    //casts can generally be performed when there is no loss of
    //precision between the "from type" and the "to type."
    return (float) num;
}

//just counts to ten and returns:
void countToTen() {
    short count = 1;
    while (count <= 10) {
        printf("%d, ", count++);
    }
    printf("\n");
}

//prints a wedge of "what" characters, 
//the wedge will have "lines" lines of characters:
void wedge(char what, int lines) {
    for (int i = 1; i <= lines; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", what);
        }
        printf("\n");
    }
}

/****************************
 *
 *  ASSIGNMENT1:Study the wedge function. Write four functions like 
 *              wedge that print wedges in the following
 *              configurations:
 *              
 *              #           #   #####   #####
 *              ##         ##   ####     ####
 *              ###       ###   ###       ###
 *              ####     ####   ##         ##
 *              #####   #####   #           #
 *
 ****************************/

/****************************
 *
 * ASSIGNMENT2:The following code snippet swaps the values of
 *             two integers:
 *
 *             int a = 1, b = 2
 *             int temp;
 *             temp = a;
 *             a = b;
 *             b = temp;
 *
 *             Try to write a function that takes two integers
 *             a and b and swaps their values. Were you successful? 
 *             What do you think might be going on here? Can you 
 *             think of a way to make such a function work?
 * 
 ***************************/
