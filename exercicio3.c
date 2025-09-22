#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

typedef struct Personagem personagem;

void preencheB (personagem* p) {
    printf ("Digite a força do personagem: ");
    scanf("%d",&p->forca);
    printf ("Digite a energia do personagem: ");
    scanf("%d",&p->energia);
    printf ("Digite a experiencia do personagem: ");
    scanf("%d",&p->experiencia);
}

void main (void) {
    personagem p1;
    preencheB(&p1);

    personagem p2;
    preencheB(&p2);

    printf("(%d,%d,%d) vs (%d,%d,%d)\n",
           p1.forca, p1.energia, p1.experiencia,
           p2.forca, p2.energia, p2.experiencia);
}
