
/*
Name: Elijah Luehrmann
Student ID: 201942447
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[49]; // max length of all command line arguments is 4*10 and would have 9 '-' added so max string length is 49
    // process the command-line data using appropriate string functions
    for(int i = 1; i < argc; i++){
        strcat(buffer, argv[i]);
        if (i != argc-1){
            strcat(buffer, "-");
        }
    }
    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}