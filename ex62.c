#include <stdio.h>

int main() {
    float notas, media;
    int alunos, i, total = 0;
    printf("Digite quantos alunos existem em determinada turma: ");
    scanf("%d", &alunos);

    for(i = 1; i <= alunos; i++){
        printf("\nDigite a nota do Aluno %d: ", i);
        scanf("%f", &notas);
        total = total + notas;
    }
    media = total / alunos;
    printf("\no valor da media das notas dos alunos e %f", media);
}
