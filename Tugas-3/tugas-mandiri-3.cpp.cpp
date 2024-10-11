#include <stdio.h>
#include <math.h>

int main() {
	float sisi_tegak, sisi_alas, sisi_miring;
	
	printf("masukan panjang sisi tegak segitiga(cm): ");
	scanf("%f", &sisi_tegak);
	printf("masukan panjang alas segitiga(cm): ");
	scanf("%f", &sisi_alas);
	
	sisi_miring = sqrt((sisi_tegak) + (sisi_alas * sisi_alas));
	
	printf("sisi miring segoitiga adalah: %.2f cm\n", sisi_miring);
	
	return 0;
}
