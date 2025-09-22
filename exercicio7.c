#include <string.h>

struct ProdutoBeleza{
    char nome[50];
    char marca[50];
    float preco;
};
typedef struct ProdutoBeleza prod_blz;

void preenche(prod_blz* p) {
    printf("Digite a cor do batom: ");
    scanf(" %[^\n]", p->nome);

    printf("Digite a marca: ");
    scanf(" %[^\n]", p->marca);

    printf("Digite o preço: ");
    scanf("%f", &p->preco);
    }
   

void mostra_produto(prod_blz p) {
    printf("\n Dados do Batom \n");
    printf("Cor: %s\n", p.nome);
    printf("Marca: %s\n", p.marca);
    printf("Preço: R$ %.2f\n\n", p.preco);
    
}

int main() {
    prod_blz batom;
    

    preenche(&batom);   
    mostra_produto(batom);
    


    return 0;
}
