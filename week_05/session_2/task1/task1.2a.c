//Week 5, Session 2

# include <stdio.h>
# include <string.h>

int main(void){
/* Task 1.2a
* Complete the following while loop in C to ask user input for a password 
* until 'secure123' is entered.
*/
    char password[50];
    char correct_password[] = "secure123";
	while (strcmp(password, correct_password) != 0) {
        printf("Enter the password: ");
        scanf("%s", password);
    }
	// compare using strcmp(str1,str2) from week 4
	// complete the rest of the code here
	printf("Correct password entered\n");
    return 0;
}