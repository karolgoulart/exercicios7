#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

typedef struct Personagem personagem;

int main() {
    personagem p1;
    p1.forca= 10;
    p1.energia= 50;
    p1.experiencia= 30;
    
    personagem p2= {18, 20, 25};
    
    printf("\nDados do personagem 1: \n");
    printf("Força: %d\n", p1.forca);
    printf("Energia: %d\n", p1.energia);
    printf("Experiência: %d\n", p1.experiencia);
    
    printf("\nDados do personagem 2: \n");
    printf("Força: %d\n", p2.forca);
    printf("Energia: %d\n", p2.energia);
    printf("Experiência: %d\n", p2.experiencia);
    
    
    return 0;
}
