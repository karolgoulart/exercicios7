#include <stdio.h>
#include <string.h>

#define TAM 3

struct atleta {
    char nome[100];
    int idade;
    char esporte[50];
};

typedef struct atleta atleta;

void mostraAtleta (atleta a){
    printf("\nNome: %s \n", a.nome);
    printf("Idade: %d \n", a.idade);
    printf("Esporte: %s \n", a.esporte);
}

void main () {
    atleta atletas[TAM]= {
        {"Rebeca Andrade", 26, "Ginástica Artística"},
        {"Cristiano Ronardo", 40, "Futebol"},
        {"Lebron James", 40, "Basquete"}
    };
    
    printf("\nAtletas: \n");
    for (int i=0; i<TAM; i++) {
        mostraAtleta(atletas[i]);
    }
}
