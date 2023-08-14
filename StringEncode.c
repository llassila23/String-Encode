// String Encode C Project
// Created by Lucas Lassila on 8/9/23.
// Initial Commit 8/9/23
// This program is designed to use a string to encode data that will be used to print a picture to console

/* each char in the string will represent a number, The number will determine what action is completed
    To draw the picture we need to know:
    1. start a new line?
    2. What character to print?
    3. how many of said char to print?
The main body of the program could be handled by a for each loop with if else statements to call printing

Once completed: it could be done in reverse; enter lines and convert them to a string.
 */

#include <stdio.h>

// function declaration

void printStar(char c);
void printSpace(char c);

int main(){
    // 50x30 resolution
    char str[]  = "n H*Un G*Vn E*A C*Tn E*B B*Tn F*C A*Sn F*Wn G*Vn I*E On!"; // string here

    int strLength = sizeof(str) / sizeof(str[0]);
    // string length = mem size of string / mem size of one char

    // i increments through string, j is "number code"

    for(int i = 0; i < strLength; i++){

        int j = str[i] - 0; //

        if(j == 110){
            printf("\n");
            // 78 = ASCII for "N"
            // next line, will increment i at loop header
        }else if(j == 42){
            // 42 == ASCII for "*"
            printStar(str[i+1]);
            // use next letter for print instructions,
            i++;
            // increment i each time
        }else if(j == 32){
            // 32 == ASCII for " "
            printSpace(str[i+1]);

            i++;
        }else if(j == 33){
            // 33 == ASCII for "!"
            printf("\n"); // end of picture
            break;
        }else{
            printf("\nFaulty code at position: %d", i);
            break;
        }

    }
} // end main

void printStar(char c){
    int n = c-64;
    //c will be a letter, ASCII alphabet starts at 65
    // ex: n = (A - 64) == 1
    while(n > 0){
        printf("*");
        n--;
    }
}

void printSpace(char c){
    int n = c-64;
    while(n > 0){
        printf(" ");
        n--;
    }
}







