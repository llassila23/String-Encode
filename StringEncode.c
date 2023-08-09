// String Encode C Project
// Created by Lucas Lassila on 8/9/23.
// Initial Commit 8/9/23
// This program is designed to use a string to encode data that will be used to print a picture to console

/* each char in the string will represent a number, The number will determine what action is completed
    To draw the picture we need to know:
    1. start a new line?
    2. What char to print?
    3. how many of said char to print?
The main body of the program could be handled by a for each loop with if else statements to call printing

Once completed: it could be done in reverse; enter lines and convert them to a string.
 */

#include <stdio.h>

int main{
    char str[]  = ""; // string here

    int strLength = sizeof(str) / sizeof(str[0]);
    // string length = mem size of string / mem size of one char

    for(int i = 0; i < stringLength; i++){

        int j = str[i] - 0; //

        if(j == /n){
            // next line
        }else if(j == num for star){
            // print star for val of j++
            // j++
        }else if(j == num for space){
            // print space for val of j++
            // j++
        }else{
            printf("\n Faulty code at position: ", j);
            break; 
        }

    }
};

