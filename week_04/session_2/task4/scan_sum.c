
#include <stdio.h>

int main( void ) {

    // define suitable data
    int i;
    int j;
    char a;
    char b;

    // use scanf to read from the terminal
    // print the output from scanf and the data values 
    int sum = scanf("%d %c %d %c", &i, &a, &j, &b);
    printf("%d\n", i);

    char input[] = *fgets(input, 32, stdin);
    return 0;
}