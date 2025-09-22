#include <stdio.h>

struct posicao {
    int x;
    int y;
};

typedef struct posicao posicao;

struct personagem {
    int identidade;
    posicao posicao;
    int pontuacao;
};
typedef struct personagem personagem;

void lerpersonagem (personagem *p){
    printf("Digite a identidade do personagem: ");
    scanf("%d", &p->identidade);
    printf ("Digite a posição X: ");
    scanf ("%d", &p->posicao.x);
     printf ("Digite a posição Y: ");
    scanf ("%d", &p->posicao.y);
    
    p->pontuacao=0;
}    
void desenharmapa (personagem personagens[], int total) {
    printf("\n Mapa do Jogo \n");
    
    
    for (int i=0; i<total; i++){
        printf("Personagem %d na posição: (%d, %d)\n", personagens[i].identidade, personagens[i].posicao.x, personagens[i].posicao.y);
    }
}

void main (){
    personagem personagens[10];
    
    for (int i=0; i<10; i++){
        printf("\nDados do personagem %d \n", i+1);
        lerpersonagem(&personagens[i]);
    }
    desenharmapa(personagens, 10);
}
}
