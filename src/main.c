#include <stdio.h> 


const char *get_hello_message(void) {
	return "Hello Tests!";
}

int main(void)
{
	printf("%s %s\n", get_hello_message(), CONFIG_BOARD_TARGET); 

	return 0; 
}
