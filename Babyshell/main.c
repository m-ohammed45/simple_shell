#include <main.h>

int main(int b , char **argv){
	char *prompt = "(Babyshell) $ " ;
	char *lineptr;
	size_t ac = 0;
	
	(void)b; (void)argv;

	printf("%s" ,prompt);
	getline(&lineptr , &ac, stdin);
	printf("%s\n" ,lineptr);
	free(lineptr);

	return 0;
}
