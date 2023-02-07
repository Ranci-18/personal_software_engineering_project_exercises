#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char mod_string(char *input_str[], char c);
int main(void)
{
	int main() {
	char input_str[100], c;
	
	printf("Enter the input string: ");
	scanf("%s", input_str);
	printf("Enter the character to remove: ");
	scanf(" %c", &c);
	mod_string(input_str, c);
	
	return 0;
}
}
char mod_string(char *input_str[], char c)
{
    int i, j;
    
    for (i = 0, j = 0; input_str[i] != '\0'; i++) 
	{
        if (input_str[i] != c) 
	{
            input_str[j++] = input_str[i];
        }
	}
	input_str[j] = '\0';
	printf("Modified string: %s\n", input_str);
}
	return (input_str);
}
