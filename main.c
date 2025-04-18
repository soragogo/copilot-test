#incldue <stdio.h>
#include <libc.h>

int main() {
	int * test = malloc(int);
	test = 5;
	printf("%d", test);	
}
