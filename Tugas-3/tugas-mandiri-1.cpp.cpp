#include <stdio.h>
#include <math.h>

int main() {
	float celcius;
	
	printf("masukan panjang alas segitiga(cm); "); //input panjang alas segitiga
	scanf("%f", &alas);
	printf("masukan tinggi segitiga(cm; ");
	scanf("%f", &tinggi);
	
	luas = 0.5 * alas * tinggi;
	
	sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));
	keliling = alas + tinggi + sisi_miring;
	
	printf("luas segitiga: %.2f cm\n", luas);
	printf("keliling segitiga: %.2f cm\n", keliling);
	
	return 0;
}
