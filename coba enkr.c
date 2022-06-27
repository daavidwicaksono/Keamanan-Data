#include<stdio.h>


void main(){
	
	char x[50];
	int a, y, z, i;
	
	printf("~ APLIKASI ENKRIPSI KALIMAT ~\n\n");
	printf("Masukkan Kalimat : ");
	scanf("%[^\n]", &x);
	printf("Masukkan Kunci Geser : ");
	scanf("%i", &z);
	
	a = strlen(x);
		for(i=0;i<a;i++){
			y = x[i] + 26 + z;
			if(x[i] == ' '){
				printf(" ");
			}
			else{
			printf("%c", y);
			}
		}
}
