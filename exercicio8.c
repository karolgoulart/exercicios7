#include <stdio.h>
#include <math.h>

struct Ponto {
    int x;
    int y;
};

typedef struct Ponto ponto;

void preenchePonto(ponto *p) {
    printf("Digite a coordenada x do ponto: ");
    scanf("%d", &p->x);
    printf("Digite a coordenada y do ponto: ");
    scanf("%d", &p->y);
}

void vetorpontos( ponto vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("\nPreenchendo o ponto %d:\n", i + 1);
        preenchePonto(&vetor[i]);
    }
}

    ponto pontoMaisDistante(ponto vetor[], int tamanho) {
    ponto maisDistante;
    double maiorDistancia = 0.0;

    for (int i = 0; i < tamanho; i++) {
        double distanciaAtual = sqrt(pow(vetor[i].x, 2) + pow(vetor[i].y, 2));

        if (distanciaAtual > maiorDistancia) {
            maiorDistancia = distanciaAtual;
            maisDistante = vetor[i];
        }
    }
    return maisDistante;
}

int main() {
    
    #define NUM_PONTOS 10
    ponto meusPontos[NUM_PONTOS];

    vetorpontos(meusPontos, NUM_PONTOS);

    struct Ponto pontoLonge = pontoMaisDistante(meusPontos, NUM_PONTOS);

    printf("\nO ponto mais distante da origem e: (%d, %d)\n", pontoLonge.x, pontoLonge.y);

    return 0;
}
