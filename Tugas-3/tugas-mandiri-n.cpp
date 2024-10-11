#include <stdio.h>

int main() {
	int bilangan;
	
	printf("masukan bilangan bulat: ");
	scanf("%d", &bilangan);
	
	if (bilangan % 2 == 0) {
	    printf("bilangan %d adalah genap\n", bilangan);
	} else {
	printf("bilangan %d adalah ganjil\n", bilangan);
}

	return 0;
}
