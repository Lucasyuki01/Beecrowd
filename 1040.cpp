#include <stdio.h>

int main(){
	float n1, n2, n3, n4, media, exame;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	media =  ((2*n1)/10) + ((3*n2)/10) + ((4*n3)/10) + ((n4)/10);

	printf("Media: %.f\n", media);
	
	if(media < 5.0){
		printf("Aluno em exame.\n");
		scanf("%f", &exame);
		
		media = (media + exame)/2;
		
		if(media < 5.0)
			printf("Aluno reprovado.\nMedia final: %.f", media);
			
		else
			printf("Aluno aprovado.\nMedia final: %.f", media);
	}
	
	return 0;
}
