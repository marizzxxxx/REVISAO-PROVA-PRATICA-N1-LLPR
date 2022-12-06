#include <stdio.h>

int main() {
	int alunos;
	float nota, Notas, media;
	printf("Informe o Número de Alunos: ");
	scanf("%d", &alunos);
	for(int laco=1; laco<=alunos;laco++) {
		printf("Informe as Notas do Aluno %d:\n", laco);
		scanf("%f", &nota);
		Notas = Notas + nota;
	}
	media = Notas/alunos;
	printf("Media = %.2f", media);
	return 0;
}
