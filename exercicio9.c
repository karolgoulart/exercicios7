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

void main (){
    personagem personagem [10];
    
    for (int i=0; i<10; i++) {
    personagem[i].identidade= i+1;
    personagem[i].posicao.x=0;
    personagem[i].posicao.y=0;
    personagem[i].pontuacao=0;
    }
    printf("Os 10 personagens foram criados e inicializados: \n\n");
    
    for (int i=0; i<10; i++){
        printf("Personagem %d: \n", personagem[i].identidade);
        printf("Posição: (%d, %d)\n", personagem[i].posicao.x, personagem[i].posicao.y);
        printf("Pontuação: %d\n\n", personagem[i].pontuacao);
    
    }
    
    
}
