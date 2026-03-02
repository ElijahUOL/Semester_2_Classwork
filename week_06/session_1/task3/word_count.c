#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
    if (argc == 1)
    {
        printf("Expected use case: ./word_count file_name.txt");
        return 1;
    }
    char file_name[] = *argv[1];
    char buffer[100];
    int lines;
    int words;
    int characters;
    FILE *file = fopen(file_name, "r");
    if (file == NULL)
    {
        printf("File not found");
        return 1;
    }
    while (fgetc(file) != NULL)
    {
        
    }

}