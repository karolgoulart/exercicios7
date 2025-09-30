#include <stdio.h>

struct ponto {
    int x;
    int y;
    int z;
};

typedef struct ponto ponto;

int main (){
    ponto v1= {1,0,5};
    ponto v2= {3,3,3};
    ponto v3= {0,10,0};
    
    printf("Coordenada y de v1: %d\n", v1.y);
    printf("Coordenada y de v2: %d\n", v2.y);
    printf("Coordenada y de v3: %d\n", v3.y);
    
    v1.z+=10;
    v2.z+=10;
    v3.z+=10;
    
    printf("Coordenadas de v2: (%d, %d, %d)\n", v2.x, v2.y, v2.z);
    return 0;
}
