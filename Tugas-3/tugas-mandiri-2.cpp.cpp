#include <stdio.h>
#include <math.h>

int main () {
	float celcius, fahrenheit, reamur;
	
	printf("masukan suhu dalam celcius: ");
	scanf("&f", &celcius);
	
	fahrenheit = (celcius * 9 / 5) + 32;
	reamur = celcius * 4 / 5;
	
	printf("suhu dalam fahrenheit: %2f c\n", fahrenheit);
	printf("suhu dalam reamur: %.2f cn", reamur);
	
	return 0;
}
