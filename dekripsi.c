#include<stdio.h>
 
int main()
{
	char pesan[100], kata;
	int i, kunci;
	printf("Masukkan kata yang akan di dekripsi : ");
	gets(pesan);
	printf("Masukkan Kunci: ");
	scanf("%d", &kunci);
	for(i = 0; pesan[i] != '\0'; ++i){
		kata = pesan[i];
		if(kata >= 'a' && kata <= 'z'){
			kata = kata - kunci;
		if(kata < 'a'){
			kata = kata + 'z' - 'a' + 1;
		}
			pesan[i] = kata;
		}
		else if(kata >= 'A' && kata <= 'Z'){
			kata = kata - kunci;
			if(kata < 'A'){
			kata = kata + 'Z' - 'A' + 1;
			}
		pesan[i] = kata;
		}
	}
	printf("Dekripsi pesan: %s", pesan);
	return 0;
}
