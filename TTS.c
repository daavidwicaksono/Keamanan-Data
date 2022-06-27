#include<stdio.h>
 
int main()
{
	char pesan[100], kata;
	int i, kunci;
	printf("Masukkan Pesan : ");
	gets(pesan);
	
	printf("\nMasukkan Kunci: ");
	
	scanf("%d", &kunci);
	
	for(i = 0; pesan[i] != '\0'; ++i){
		kata = pesan[i];
			if(kata >= 'a' && kata <= 'z'){
			kata = kata + kunci;
			if(kata > 'z'){
			kata = kata - 'z' + 'a' - 1;
			}
			pesan[i] = kata;
	}
			else if(kata >= 'A' && kata <= 'Z'){
			kata = kata + kunci;
			if(kata > 'Z'){
			kata = kata - 'Z' + 'A' - 1;
			}
			pesan[i] = kata;
		}
	}
	printf("\nPesan yang dienkripsi: %s \n", pesan);
	return 0;
}
