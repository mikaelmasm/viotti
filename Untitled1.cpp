#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	
	int x, y, cont, cont2, multiplo2, multiplo3, multiplo4, s2, s3, s4, stotal;
	printf("Digite o primeiro número: \n");
	scanf("%d", &x);
	printf("Digite o segndo número: \n");
	scanf("%d", &y);
	multiplo3 = 0;
	stotal=0;
	s2 = 0;
	s3 = 0;
	s4 = 0;
	cont = x;
	cont2 = y;
	if(x<y){
	
	do {
		
	
	printf("%d\n",cont);
	if (cont%2==0)
	 {
		multiplo2=multiplo2+1;
		s2 = s2+cont;
	}
	if (cont%3==0) {
		multiplo3=multiplo3+1;
		s3 = s3+cont;
	}
	if (cont%4==0) {
		multiplo4=multiplo4+1;
		s4 = s4+cont;
	}
	cont++;
	} while(cont<=y);
	}
	else{
	do {
		
	
	if (cont2%2==0) {
		multiplo2=multiplo2+1;
		s2 = s2+cont2;
	}
	if (cont2%3==0) {
		multiplo3=multiplo3+1;
		s3 = s3+cont2;
	}
	if (cont2%4==0) {
		multiplo4=multiplo4+1;
		s4 = s4+cont2;
	}
	cont2++;
	} while(cont2<=x);	
	}
	stotal=s2+s3+s4;
	printf("%d multiplos de 2 \n",multiplo2);
	printf("%d multiplos de 3 \n",multiplo3);
	printf("%d multiplos de 4 \n",multiplo4);
	printf("%d somatoria total dos multiplos",stotal);
	
	
	
	
}
