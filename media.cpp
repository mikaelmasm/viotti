#include<stdlib.h>
#include<stdio.h>
void criterio(float m){
	if(m<6)
		printf("Vose esta reprovado\n");
	else
		printf("Vose esta aprovado\n");
}
float media(float a, float b, float c){
	if(a<b&&a<c){
		float m=(b+c)/2;
		return m;	
	}else if(b<a&&b<c){
		float m=(a+c)/2;
		return m;
	}else{
		float m=(a+b)/2;
		return m;
	}	
}
int main(){
	float n1, n2 ,n3, med;
	char resp='s';
	while(resp=='s'){
		system("cls");
		printf("Digite a nota 1: \n");
		scanf("%f", &n1);
		printf("Digite a nota 2: \n");
		scanf("%f", &n2);
		printf("Digite a nota 3: \n");
		scanf("%f", &n3);
		med=media(n1,n2,n3);
		printf("Media = %.2f\n", med);
		criterio(med);
		printf("Digite s para continuar: ");
		fflush(stdin);
		scanf("%c",&resp);
		system("pause");
	}
}
